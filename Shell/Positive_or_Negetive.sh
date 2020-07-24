#Find positve negetive numbers

echo "Enter a Number:"
read n
if [ $n -gt 0 ]
then 
    echo "Number is positive"
else
    if [ $n -eq 0 ]
    then
        echo "Number is Zero!"  
    else
        echo "Number is Negative!!"
    fi
fi
