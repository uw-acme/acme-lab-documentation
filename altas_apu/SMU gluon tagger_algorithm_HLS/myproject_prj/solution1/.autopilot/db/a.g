#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/rnarayan/hls4ml/thea/Quantized_CNN/cnn_projects/full_10bit_reuse1/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
