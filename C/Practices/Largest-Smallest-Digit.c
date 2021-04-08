#include <stdio.h>

int main()
{

    int number, lastDigit, smallest = 9, largest = 0;

    printf("Enter a number:");
    scanf("%d", &number);

    while (number > 0)
    {
        lastDigit = number % 10;

        if (smallest > lastDigit)
        {
            smallest = lastDigit;
        }

        if (largest < lastDigit)
        {
            largest = lastDigit;
        }

        number = number / 10;
    }
    printf("\nLargest digit is: %d\n", largest);
    printf("Smallest digit is: %d\n", smallest);

    return 0;
}