#/bin/bash
#
# $Author: tatparya $

NumParams=$#
ParamVals=$@

while read -a line
do
    #	For each of the three subjects, check if pass
    fail=0
    if(( ${line[1]} < 50 ))
    then
    	fail=$(( $fail + 1 ))
    fi

    if(( ${line[2]} < 50 ))
    then
    	fail=$(( $fail + 1 ))
    fi

    if(( ${line[3]} < 50 ))
    then
    	fail=$(( $fail + 1 ))
    fi

    if (( !fail ))
    then
    	echo "${line[0]} : Pass"
    else
    	echo "${line[0]} : Fail"
   	fi
done	

exit 0