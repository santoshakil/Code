#include <stdio.h>

void main()
{
    int x[5];

    printf("Input 5 numbers: ");
    scanf("%d%d%d%d%d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    printf("You inserted these values: %d %d %d %d %d", x[0], x[1], x[2], x[3], x[4]);
}
