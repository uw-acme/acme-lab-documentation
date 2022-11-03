set lang "C++"
set moduleName "myproject"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "conv2d_input"
set BitWidth0 "16"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "2"
set Reference0 "1"
set Dims0 [list 0]
set Interface0 [list AP_STREAM 0] 
set structMem0 ""
set PortName00 "data"
set BitWidth00 "16"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list  1]
set Interface00 "wire"
set DataType00 "[list ap_fixed 16 6 5 3 0 ]"
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set DataType0tp1 "unsigned int"
set structParameter0 [list [list typename T] [list $DataType0tp1 N] ]
set DataType0ta0 "[list ap_fixed 16 6 5 3 0 ]"
set structArgument0 [list $DataType0ta0 1 ]
set SpaceName00 "nnet"
set NameSpace0 [list  [list  space $SpaceName00] ]
set structIsPacked0 "0"
set DataType0 [list "nnet::array<ap_fixed<16, 6, 5, 3, 0>, 1>" "struct array" $structMem0 1 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "layer13_out"
set BitWidth1 "32"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "2"
set Reference1 "1"
set Dims1 [list 0]
set Interface1 [list AP_STREAM 0] 
set structMem1 ""
set PortName10 "data"
set BitWidth10 "32"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list  2]
set Interface10 "wire"
set DataType10 "[list ap_fixed 16 6 5 3 0 ]"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set DataType1tp1 "unsigned int"
set structParameter1 [list [list typename T] [list $DataType1tp1 N] ]
set DataType1ta0 "[list ap_fixed 16 6 5 3 0 ]"
set structArgument1 [list $DataType1ta0 2 ]
set SpaceName10 "nnet"
set NameSpace1 [list  [list  space $SpaceName10] ]
set structIsPacked1 "0"
set DataType1 [list "nnet::array<ap_fixed<16, 6, 5, 3, 0>, 2>" "struct array" $structMem1 1 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set PortName2 "const_size_in_1"
set BitWidth2 "16"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "2"
set Reference2 "1"
set Dims2 [list 0]
set Interface2 "wire"
set DataType2 "unsigned short"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2]
lappend PortList $Port2
set PortName3 "const_size_out_1"
set BitWidth3 "16"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "2"
set Reference3 "1"
set Dims3 [list 0]
set Interface3 "wire"
set DataType3 "unsigned short"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3]
lappend PortList $Port3
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 1 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
