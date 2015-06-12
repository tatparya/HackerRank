#/bin/bash
#
# $Author: tatparya $

NumParams=$#~~
ParamVals=$@

while read -a lines
do
    line=$(( ${lines[0]}${lines[1]}${lines[2]}${lines[3]} ))
    match=$(echo $line | egrep -c '([0-9]+)\1+')
    if (( $match ))
    then
        echo ${lines[*]}
    fi
done

exit 0