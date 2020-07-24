#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("You Enter 1");
        break;
    case 2:
        printf("You Enter 2");
        break;
    case 3:
        printf("You Enter 3");
        break;
    }
}
