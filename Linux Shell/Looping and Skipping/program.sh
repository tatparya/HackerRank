#! /bin/bash
#
# $Author: tatparya $

for (( i=0; i<100; i+=1 ))
do
	if (( $i % 2 != 0 ))
	then
		echo $i
	fi
done