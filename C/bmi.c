#include <stdio.h>

void main()
{
    double weight, height, bmi, h;

    printf("Enter your weight in kg: ");
    scanf("%lf", &weight);
    printf("Enter your Height in m: ");
    scanf("%lf", &height);

    h = height * height;
    bmi = weight / h;

    printf("Your BMI is : %.2lf\n", bmi);
}
