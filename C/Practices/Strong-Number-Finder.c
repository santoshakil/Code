#include <stdio.h>

int main()
{
    int i, num, lastDigit, temp;
    int sum = 0;
    long fact;

    printf("\nEnter a number please: ");
    scanf("%d", &temp);

    num = temp;

    while (temp > 0)
    {
        lastDigit = temp % 10;
        fact = 1;

        for (i = 1; i <= lastDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    (sum == num)
        ? printf("\n%d is strong number\n", num)
        : printf("%d is not strong number\n", num);

    return 0;
}