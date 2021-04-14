#include <stdio.h>

int main()
{
    int number, selectedDigit, last = 9, first = 0;

    printf("Enter a number:");
    scanf("%d", &number);

    while (number > 0)
    {
        selectedDigit = number % 10;

        if (last > selectedDigit)
        {
            last = selectedDigit;
        }

        if (first < selectedDigit)
        {
            first = selectedDigit;
        }

        number = number / 10;
    }
    printf("\nLargest digit is: %d\n", first);
    printf("Smallest digit is: %d\n", last);

    return 0;
}
