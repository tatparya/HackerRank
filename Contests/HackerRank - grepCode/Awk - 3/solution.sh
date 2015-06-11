#/bin/bash
#
# $Author: tatparya $

NumParams=$#
ParamVals=$@

while read line
do
    echo $line |  awk '{

avg = ( $2 + $3 + $ 4 ) / 3;
if( avg > 80 )
    grade = "A";
else if ( avg > 60 )
    grade = "B";
else if ( avg > 50 )
    grade = "C";
else
    grade = "FAIL";

print $0, ":", grade;

}'
done
exit 0