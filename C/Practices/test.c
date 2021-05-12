#include <stdio.h>

void Output(int a, int *b, int c)
{
    printf("a: %d, *b: %d, c: %d\n", a, *b, c);
    a += *b;
    *b += c;
    c += a;

    printf("a: %d, *b: %d, c: %", a, *b, c);
    return;
}

int main()
{
    int n1 = 1, n2 = 2, n3 = 3;

    printf("n1: %d, n2: %d, n3: %d", n1, n2, n3);
    Output(n1, n2, n3);
    printf("n1: %d, n2: %d, n3", n1, n2, n3);
    return 0;
}