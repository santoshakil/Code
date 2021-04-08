#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter Three numbers: ");

    scanf("\n%d%d%d", &n1, &n2, &n3);

    switch (n1 > n2)
    {
    case 0:
        switch (n2 > n3)
        {
        case 0:
            printf("\n%d is Maximum number\n", n3);
            break;
        case 1:
            printf("\n%d is Maximum number\n", n2);
            break;
        }
        break;

    case 1:
        switch (n1 > n3)
        {
        case 0:
            printf("\n%d is Maximum number\n", n3);
            break;
        case 1:
            printf("\n%d is Maximum number\n", n1);
            break;
        }
        break;
    }

    return 0;
}