#include <stdio.h>
#include <math.h>

void main()
{
    long int i, n, x = 0, a;

    printf("Enter any binary number: ");
    scanf("%ld", &n);
    printf("\nThe decimal conversion of %ld is ", n);

    for (i = 0; n != 0; ++i)
    {
        a = n % 10;
        x = (a) * (pow(2, i)) + x;
        n = n / 10;
    }

    printf("%ld", x);
}
