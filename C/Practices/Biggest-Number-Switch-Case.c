#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Enter Three numbers: ");

    scanf("\n%d%d%d", &number1, &number2, &number3);

    switch (number1 > number2)
    {
    case 0:
        switch (number2 > number3)
        {
        case 0:
            printf("\n%d is Largest number\n", number3);
            break;
        case 1:
            printf("\n%d is Largest number\n", number2);
            break;
        }
        break;

    case 1:
        switch (number1 > number3)
        {
        case 0:
            printf("\n%d is Largest number\n", number3);
            break;
        case 1:
            printf("\n%d is Largest number\n", number1);
            break;
        }
        break;
    }

    return 0;
}
