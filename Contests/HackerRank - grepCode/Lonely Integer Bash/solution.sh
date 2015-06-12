#/bin/bash
#
# $Author: tatparya $

NumParams=$#~~
ParamVals=$@

read numNumbers
read -a numbers

num=0

for element in ${numbers[*]}
do
    num=$(( $num ^ element ))
done

echo $num

exit 0