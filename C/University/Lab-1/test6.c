#include <stdio.h>

void main()
{
    int secondInput, hour, minuite, seconds;

    printf("Please enter time in seconds: ");
    scanf("%d", &secondInput);

    hour = secondInput / 3600;
    minuite = (secondInput - (hour * 3600)) / 60;
    seconds = (secondInput - (hour * 3600) - (minuite * 60));

    printf("H:M:S - %d:%d:%d\n", hour, minuite, seconds);
}

// gcc test6.c -o test6 && ./test6
