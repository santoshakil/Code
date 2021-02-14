#include <stdio.h>

double main()
{
    double height, weight, h, bmi;

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    printf("Enter your weight in kg: ");
    scanf("%lf", &weight);

    h = height * height;

    bmi = weight / h;

    printf("your BMI is: %.2lf\n", bmi);

    return bmi;
}
