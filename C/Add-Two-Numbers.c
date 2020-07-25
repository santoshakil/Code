#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Enter two numbers to add: ");
    scanf("%f%f", &x, &y);

    z = x + y;

    printf("Sum of the numbers = %f\n", z);

    return 0;
}
