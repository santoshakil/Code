#include <stdio.h>

void main()
{
    int num, reverse = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    printf("The Reverse number is: %d\n", reverse);
}