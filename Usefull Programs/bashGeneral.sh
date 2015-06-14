#! /bin/bash
#
# $Author: ee364h05 $
# $Date: 2015-01-22 11:24:49 -0500 (Thu, 22 Jan 2015) $
# $HeadURL: svn+ssh://ece364sv@ecegrid-thin1/home/ecegrid/a/ece364sv/svn/S15/students/ee364h05/Lab01/collect_expr.sh $
# $Revision: 73513 $
# $Id: collect_expr.sh 73513 2015-01-22 16:24:49Z ee364h05 $
NumParams=$#
ParamValues=$@
if (( NumParams < 2 ))
then
    echo "usage: collect_expr.bash <output file> <input file> [input file 2] ... [input file N]"
    exit 1
fi
if [[ -e $1 ]]
then
    echo "error: output file $1 already exists!"
    exit 2
fi