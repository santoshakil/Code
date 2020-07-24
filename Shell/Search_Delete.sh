#A Shell Script To Delete The Lines Containing A Word <Dd> If It Appears #Between The 5th And 7th Position
for i in 'cat Test.txt'
do
    j = 'expr length $i'
    if [[ ( "$j" == 5 || "$j" == 7 ) ]]
    then
        v = 'echo $i | grep dd'
        if [ "$v" != "" ]
        then
            echo $v
            sed -i "s/$v/lalat/g" test.txt
        fi
    fi
done
