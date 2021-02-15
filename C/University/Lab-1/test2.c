#include <stdio.h>

void main()
{
    float runs, bowls, strikeRate;

    printf("How many Runs? ");
    scanf("%f", &runs);

    printf("\nHow many Bowls? ");
    scanf("%f", &bowls);

    strikeRate = (runs / bowls) * 100;

    printf("Strike rate: %.2f\n", strikeRate);
}