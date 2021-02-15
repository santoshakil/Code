#include <stdio.h>

void main()
{
    char character;

    printf("Please enter a character: ");
    scanf("%c", &character);

    printf("Ascii value of %c is: %d\n", character, character);
}

// gcc test9.c - o test9 &&./ test9
