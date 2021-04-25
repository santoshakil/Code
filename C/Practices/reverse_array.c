#include <stdio.h>

void main()
{
    int array[10], arraySize, i;

    // Get array size
    printf("\nEnter the size of Array: \n");
    scanf("%d", &arraySize);

    // Scan numbers arraySize time
    printf("\nPlease Enter %d elements:  \n", arraySize);
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    // Reverse loop to print the array in reverse order
    printf("\nReverse array = ");
    for (i = arraySize - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}