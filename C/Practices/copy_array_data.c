#include <stdio.h>

void main()
{
    int i, arraySize, array1[10], array2[10];

    // Get array size
    printf("\nEnter the size of Array: \n");
    scanf("%d", &arraySize);

    // Scan numbers arraySize time
    printf("\nPlease Enter %d elements:  \n", arraySize);
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Set array1[i] to array2[i]
    for (i = 0; i < arraySize; i++)
    {
        array2[i] = array1[i];
    }

    // Print array 2
    printf("\nArray 2 = ");
    for (i = 0; i < arraySize; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");
}