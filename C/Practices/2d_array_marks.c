#include <stdio.h>

void main()
{
    int maxAgg, i, j, maxMath, failed;
    // Math -> Physics -> Chemistry
    int array[5][3] = {{15, 43, 76}, {85, 86, 100}, {45, 90, 16}, {82, 32, 55}, {66, 15, 20}};

    maxAgg = array[0][0]; // let 15 is the max number

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (array[i][j] > maxAgg)
            {
                maxAgg = j; // Find Student count
            }
        }
    }

    printf("Student %d has obtained maximum score in aggregate.\n", maxAgg);

    maxMath = array[0][0]; // let 15 is the max number

    for (i = 0; i < 5; i++)
    {
        if (maxMath < array[i][0])
        {
            maxMath = array[i][0]; // Find max math number
        }
    }

    printf("Maximum math marks: %d\n", maxMath);

    failed = 0;

    for (i = 0; i < 5; i++)
    {
        if (array[i][2] < 33)
        {
            failed = failed + 1; // Find faild student count
        }
    }

    printf("%d students have failed in chemistry.\n", failed);
}