#include <stdio.h>
void split(int n);
int fact(int n);

int main()
{
    int n;

    printf("Enter the 3 digit number: ");
    scanf("%d", &n);

    split(n);

    return 0;
}

void split(int n)
{
    int i;
    int c, x, f = 1;

    if (n > 0)
    {
        i = n % 10;
        n = n / 10;

        split(n);
        printf("Factorial of %d is %d\n", i, fact(i));
    }
}

int fact(int n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}