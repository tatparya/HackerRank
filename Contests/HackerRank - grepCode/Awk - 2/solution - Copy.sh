#/bin/bash
#
# $Author: tatparya $

NumParams=$#
ParamVals=$@

while read line
do
    echo $line |  awk '{
if ($2 < 50 || $3 < 50 ||$4 < 50)
    print $1,": Fail";
else
    print $1,": Pass";
}'

done
exit 0