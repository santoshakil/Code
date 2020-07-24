#A Shell Script To Reverse The List Of Strings And Reverse Each String Further In The List. enter string after file name. example: ./String_reverse.sh abcd

#!/bin/bash

if [ $# != 0 ]; then
    len=`echo $@ | wc -c`
    len=`expr $len - 1`
    strrev=""
    while test $len -gt 0
    do
        strrev1=`echo $@ | cut -c$len`
        strrev=$strrev$strrev1
        len=`expr $len - 1`
    done
    echo $strrev
else
    echo "ERROR: Retry with a list of strings."
fi
