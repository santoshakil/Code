#include <stdio.h>

int main()
{
    printf("Question 1:\n");
    for (int i1 = 1; i1 <= 6; ++i1)
    {
        for (int j1 = 1; j1 <= i1; ++j1)
        {
            printf("%d ", j1);
        }
        printf("\n");
    }

    printf("\nQuestion 2:\n");
    for (int i2 = 6; i2 >= 1; --i2)
    {
        for (int j2 = 1; j2 <= i2; ++j2)
        {
            printf("%d ", j2);
        }
        printf("\n");
    }

    printf("\nQuestion 3:\n");
    for (int i3 = 1; i3 <= 6; i3++)
    {
        for (int j3 = 1; j3 <= 6 - i3; j3++)
            printf(" ");
        for (int k3 = i3; k3 >= 1; --k3)
            printf("%d", k3);
        printf("\n");
    }

    printf("\nQuestion 4:\n");
    int count = 1;
    for (int i1 = 1; i1 <= 7; ++i1)
    {
        for (int j1 = 1; j1 <= i1; ++j1)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}