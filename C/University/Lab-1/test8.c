
#include <stdio.h>
#include <math.h>

void main()
{
    int x1, y1, x2, y2;
    float distance;

    printf("Please enter first Point(x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Please enter second Point(x2, y2): ");
    scanf("%d %d", &x2, &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance: %.2f\n", distance);
}

// gcc test8.c -o test8 -lm && ./test8
