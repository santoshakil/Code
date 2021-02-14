#include <stdio.h>

int main()
{
    int num;

    printf("please enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("this is a even number.\n");
    }
    else
    {
        printf("this is a odd number.\n");
    }
}
