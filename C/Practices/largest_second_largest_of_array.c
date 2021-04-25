#include <stdio.h>

void main()
{
    int i, arraySize, array[10], array2[10], largest, seccondLargest;

    // Get array size
    printf("\nEnter the size of Array: \n");
    scanf("%d", &arraySize);

    // Scan numbers arraySize time
    printf("\nPlease Enter %d elements:  \n", arraySize);
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];

    // storing the largest number to largest
    for (int i = 1; i < arraySize; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
    }

    printf("Largest element = %d\n", largest);

    // Removing largest from array[10]
    for (i = 0; i < arraySize; i++)
    {
        if (array[i] != largest)
        {
            array2[i] = array[i];
        }
    }

    seccondLargest = array2[0];

    // storing the seccond largest number to seccondLargest
    for (int i = 1; i < arraySize - 1; i++)
    {
        if (seccondLargest < array2[i])
        {
            seccondLargest = array2[i];
        }
    }

    printf("Seccond Largest element = %d\n", seccondLargest);
}