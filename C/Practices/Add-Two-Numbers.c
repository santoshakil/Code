#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Enter two numbers to add: ");
    scanf("%f%f", &x, &y);

    z = x + y;

    printf("Sum of the numbers %.2f and %.2f = %.2f\n", x, y, z);

    return 0;
}
