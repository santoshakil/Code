#include <stdio.h>

void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("Congratulations!\nYou got A+\n");
    }
    if (marks >= 33 && marks <= 50)
    {
        printf("You got B\n");
    }
    if (marks < 33)
    {
        printf("Sorry you are Failed\nTry again\n");
    }
    else
    {
        printf("This is else Condition\n");
    }
}
