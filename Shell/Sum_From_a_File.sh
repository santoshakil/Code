#Sum of all numbers from a file

awk '{x+=$0}END{print x}' Numbers.txt
