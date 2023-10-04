"""
Example code for converting deep clean model to hls4ml using Vivado Accelerator Backend.
A large part of the space taken up by this code is for setting reuse factors
   such that the model compiles and fits on an alveo.
"""

import numpy as np
from tensorflow import keras
import hls4ml

output_dir='models/deep-clean-vivado-accel-g'
hls_predict_dir='models/predict-deep-clean-vivado-accel-g'
ib = 2
fb = 14

layer_rufactors = { # set as last successful synthesis
  'input_conv': 21,
  'conv_1': 21,
  'conv_2': 28,
  'conv_3': 56,
  'conv_4': 224, 
  'convtr_1': 256,
  'convtr_2': 64,
  'convtr_3': 32,
  'convtr_4': 16,
  'output_conv': 21,
}
ru_factor = 256

# made in reconstruct_deep_clean (has correct wts)
model = keras.models.load_model('keras_deep_clean') 

cur_config = hls4ml.utils.config_from_keras_model(model, granularity='name')
cur_config['Model']['Strategy'] ='Resource'
cur_config['Model']['Precision'] = f'ap_fixed<{ib+fb}, {ib}>'

cur_config['Model']['ReuseFactor'] = ru_factor 
# for non-conv layers / if don't set individual layers

# below just sets the reuse factor to reasonable values
for key in cur_config['LayerName'].keys():
  if 'ReuseFactor' in cur_config['LayerName'][key].keys():
    cur_config['LayerName'][key]['ReuseFactor'] = ru_factor # sets for non-conv
  if 'Precision' in cur_config['LayerName'][key].keys():
    if isinstance(cur_config['LayerName'][key]['Precision'], dict):
      for k in cur_config['LayerName'][key]['Precision'].keys():
        cur_config['LayerName'][key]['Precision'][k] = cur_config['Model']['Precision']
    else:
      cur_config['LayerName'][key]['Precision'] = cur_config['Model']['Precision']
  if 'table_t' in cur_config['LayerName'][key].keys():
    cur_config['LayerName'][key]['table_t'] = cur_config['Model']['Precision']

for key, value in layer_rufactors.items(): 
  cur_config['LayerName'][key]['ReuseFactor'] = value

# construct hls_model. This is basically same as we have been doing, but 
#    with the extra paramters meant to put it on the correct board
hls_model = hls4ml.converters.convert_from_keras_model(
    model,
    hls_config=cur_config,
    output_dir=output_dir,
    backend='VivadoAccelerator',
    board='alveo-u250',
    io_type='io_stream',
)

hls_model.compile()

# do some dummy predictions in case we want them later
np.random.seed(13) # pick a seed for dummy predictions
input_arr = np.random.normal(size=(1, 8192, 21))
y_hls = hls_model.predict(input_arr)

np.save(hls_predict_dir, y_hls)

# synthesize the model
hls_model.build(csim=False, export=True)

# make the xclbin for the model
hls_model.config.backend.make_xclbin(hls_model)
