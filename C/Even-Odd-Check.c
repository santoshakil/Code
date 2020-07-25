#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("This number is Even number.\n");
    }
    else
    {
        printf("This number is Odd number.\n");
    }
}
