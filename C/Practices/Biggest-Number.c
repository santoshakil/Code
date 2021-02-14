#include <stdio.h>

void main()
{
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("The bigest number is n1 %.2lf\n", n1);
        }
        else
        {
            printf("The bigest number is n3 %.2lf\n", n3);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf("The bigest number is n2 %.2lf\n", n2);
        }
        else
        {
            printf("The bigest number is n3 %.2lf\n", n3);
        }
    }
}
