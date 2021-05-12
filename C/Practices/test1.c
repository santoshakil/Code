#include <stdio.h>

int perfect(int *);

int main()
{
    int n, sum1;
    printf("Enter a number as integer : ");
    scanf("%d", &n);

    sum1 = perfect(&n);

    if (sum1 == n)
        printf("\nThe number %d is a perfect number\n", n);
    else
        printf("\nThe number %d is not a perfect number\n", n);
    return 0;
}

int perfect(int *numbr)
{
    int a = 1, sum = 0;

    while (a < *numbr)
    {
        if (*numbr % a == 0)
            sum = sum + a;
        a++;
    }
    return (sum);
}