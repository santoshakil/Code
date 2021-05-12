#include <stdio.h>
int main()
{
    int c = 0, c2 = 0, count = 0, count2 = 0, len, len2, i;
    char s[1000], s2[1000];

    printf("Input two string\n");
    gets(s);
    gets(s2);

    // for s
    while (s[c] != '\0')
    {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
        {
            count++;
        }
        c++;
    }

    for (i = 0; s[i] != '\0'; ++i)
    {
        len = i;
    }

    // for s2
    while (s2[c2] != '\0')
    {
        if (s2[c2] == 'a' || s2[c2] == 'A' || s2[c2] == 'e' || s2[c2] == 'E' || s2[c2] == 'i' || s2[c2] == 'I' || s2[c2] == 'o' || s2[c2] == 'O' || s2[c2] == 'u' || s2[c2] == 'U')
        {
            count2++;
        }
        c2++;
    }

    for (i = 0; s[i] != '\0'; ++i)
    {
        len2 = i;
    }

    // Check twin
    if (len == len2 && count > 0 && count2 > 0)
    {
        printf("Twin");
    }
    else
    {
        printf("Not Twin\n");
    }

    return 0;
}