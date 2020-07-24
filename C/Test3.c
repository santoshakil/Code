#include <stdio.h>

int main()
{
    float i, a, p, n, r;

    printf("Enter p, n, r: ");
    scanf("%f%f%f", &p, &n, &r);

    a = r / 100;
    i = p * n * a;

    printf("The interest is %f", i);
}
