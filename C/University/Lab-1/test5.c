#include <stdio.h>

void main()
{
    float fahrenheit, celsius;

    printf("Please enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("The temperature in Celsius: %.2f\n", celsius);
}

// gcc test5.c -o test5 && ./test5
