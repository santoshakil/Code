// #include <stdio.h>

// int main()
// {
//     float x, y, z;

//     printf("Enter two numbers to add: ");
//     scanf("%f%f", &x, &y);

//     z = x + y;

//     printf("Sum of the numbers = %f\n", z);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("Enter two numbers %d %d", &x, &y);
    z = x + y;
    printf("The sum of %d and %d: %d\n", x, y, z);
}
