 #A Shell Script To Validate Password Strength. Here Are A Few Assumptions For The Password String. Length  – minimum of 8 characters. Contain both alphabet and number. Include both the small and capital case letters.
 
echo "Enter your password"
read password
len="${#password}"

if test $len -ge 8 ; then
    echo "$password" | grep -q [0-9]
     if test $? -eq 0 ; then
           echo "$password" | grep -q [A-Z]
                if test $? -eq 0 ; then
                    echo "$password" | grep -q [a-z]   
                      if test $? -eq 0 ; then
                       echo "Strong Password"
                   else
                       echo "Weak Password -> Should include a lower case letter."
                   fi
            else
               echo "Weak Password -> Should include a capital case letter." 
            fi
     else
       echo "Weak Password -> Should use numbers in your password."   
     fi
else
    echo "Weak Password -> Password length should have at least 8 characters."
fi
