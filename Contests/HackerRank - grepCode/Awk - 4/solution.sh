#/bin/bash
#
# $Author: tatparya $

NumParams=$#
ParamVals=$@

awk '{

ORS=NR%2?";":"\n"
print $0

}'
exit 0