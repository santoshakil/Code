#include <stdio.h>

void main()
{
    int array[10], i, j, arraySize, duplicate = 0;

    printf("\nPlease enter the array size:   ");
    scanf("%d", &arraySize);

    printf("\nPlease Enter %d elements:  ", arraySize);

    // Scan numbers arraySize time
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    // Cycle through each number
    for (i = 0; i < arraySize; i++)
    {
        // Check each number if it has duplicate
        for (j = i + 1; j < arraySize; j++)
        {
            if (array[i] == array[j])
            {
                duplicate++;
                break;
            }
        }
    }

    printf("\nTotal Number of Duplicate Elements in this Array  =  %d\n", duplicate);
}