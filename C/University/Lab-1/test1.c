#include <stdio.h>

void main()
{
    float num1, num2;
    float addition, subtraction, multiplication, division;

    printf("Please enter bigger Number: ");
    scanf("%f", &num1);

    printf("Please enter smaller Number: ");
    scanf("%f", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("\n\nAddition of %.2f and %.2f = %.2f\n\n", num1, num2, addition);
    printf("Subtraction of %.2f and %.2f = %.2f\n\n", num1, num2, subtraction);
    printf("Division of %.2f and %.2f = %.2f\n\n", num1, num2, division);
    printf("Multiplication of %.2f and %.2f = %.2f\n\n", num1, num2, multiplication);
}

// gcc test1.c -o test1 && ./test1
