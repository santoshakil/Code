#include <stdio.h>

int main()
{
    int x, y, z, a;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    z = x + y;
    a = z / 2;

    printf("Avarage of %d and %d = %d", x, y, a);
}
