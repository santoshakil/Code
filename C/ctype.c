#include <stdio.h>
#include <string.h>
void main()
{
    char str[25], c;
    int i;
    printf("Enter the string: ");
    scanf("%s", str);

    for (i = 0; i <= strlen(str); i++)
    {
        c = toupper(str[i]);
        printf("%c", c);
    }
}
