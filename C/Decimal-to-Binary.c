#include <stdio.h>

void main()
{
    int n, i, j, b = 0, d;

    printf("Enter a number to convert : ");
    scanf("%d", &n);

    d = n;
    i = 1;

    for (j = n; j > 0; j = j / 2)
    {
        b = b + (n % 2) * i;
        i = i * 10;
        n = n / 2;
    }

    printf("\nThe Binary of %d is %d.\n\n", d, b);
}
