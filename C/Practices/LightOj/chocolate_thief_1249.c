#include <stdio.h>
#include <string.h>

struct shanta
{
    char s[105];
    long long a;
};

int main()
{
    int n, i, j, k, l, m, p;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        struct shanta dim[200], temp;
        long long a1[200], a2[200], a3[200], ck = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%s %lld %lld %lld", dim[j].s, &a1[j], &a2[j], &a3[j]);
            dim[j].a = a1[j] * a2[j] * a3[j];
        }
        for (k = 0; k < m; k++)
        {
            for (l = 1 + k; l < m; l++)
            {
                if (dim[k].a < dim[l].a)
                {
                    strcpy(temp.s, dim[l].s);
                    temp.a = dim[l].a;

                    strcpy(dim[l].s, dim[k].s);
                    dim[l].a = dim[k].a;

                    strcpy(dim[k].s, temp.s);
                    dim[k].a = temp.a;
                }
            }
        }
        for (p = 0; p < m - 1; p++)
        {
            if (dim[p].a == dim[p + 1].a)
                ++ck;
        }
        if (m - 1 == ck)
            printf("Case %d: no thief\n", i);
        else
            printf("Case %d: %s took chocolate from %s\n", i, dim[0].s, dim[p].s);
    }
    return 0;
}