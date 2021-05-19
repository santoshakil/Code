#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], str1[1000], str2[1000];
    int i, j, k, l, n, m, sum, sum1, a, T;
    scanf("%d", &T);
    getchar();
    for (a = 1; a <= T; a++)
    {
        gets(str);
        gets(str1);
        i = strlen(str);
        l = strlen(str1);
        k = 0;
        // Removing Space
        for (j = 0; j < i; j++, k++)
        {
            if (str[j] == ' ')
                k--;
            if (str[j] != ' ')
                str[k] = str[j];
        }
        str[k] = '\0';

        i = strlen(str);
        // Upper Case to Lower Case
        for (j = 0; j < i; j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z')
                str[j] = str[j] - 32;
        }

        m = 0;
        // Removing Space
        for (j = 0; j < l; j++, m++)
        {
            if (str1[j] == ' ')
                m--;
            if (str1[j] != ' ')
                str1[m] = str1[j];
        }
        str1[m] = '\0';
        l = strlen(str1);
        // Upper Case to Lower Case
        for (j = 0; j < l; j++)
        {
            if (str1[j] >= 'a' && str1[j] <= 'z')
                str1[j] = str1[j] - 32;
        }

        sum = 0;
        // Sum of str
        for (j = 0; j < i; j++)
        {
            sum = sum + str[j];
        }
        sum1 = 0;
        // Sum of str1
        for (j = 0; j < l; j++)
            sum1 = sum1 + str1[j];

        // Match two lines
        if (sum == sum1)
            printf("Case %d: Yes\n", a);
        else
            printf("Case %d: No\n", a);
    }
}
