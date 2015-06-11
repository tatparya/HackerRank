#/bin/bash
#
# $Author: ee364h05 $

NumParams=$#
ParamVals=$@

while read -a line
do
    if (( ${#line[*]} < 4 ))
    then
        echo "Not all scores are available for ${line[0]}"
    fi
done	

exit 0