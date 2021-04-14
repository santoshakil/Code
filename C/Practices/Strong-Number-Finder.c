#include <stdio.h>

int main()
{
    int i, num, selectedDigit, temp;
    int sum = 0;
    long fact;

    printf("\nEnter a number please: ");
    scanf("%d", &temp);

    num = temp;

    while (temp > 0)
    {
        selectedDigit = temp % 10;
        fact = 1;

        for (i = 1; i <= selectedDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    (sum == num)
        ? printf("\n%d is Strong number\n", num)
        : printf("%d is not Strong number\n", num);

    return 0;
}
