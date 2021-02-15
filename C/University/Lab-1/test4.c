#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping: x = %d, y = %d\n", x, y);
}

// gcc test4.c -o test4 && ./test4
