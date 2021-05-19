#include <stdio.h>
#include <string.h>

int a[20];

int main()
{
    int t;
    scanf("%d", &t);
    for (int ii = 1; ii <= t; ii++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        int ans = 0;
        a[0] = 2;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i + 1] > a[i])
                ans += (a[i + 1] - a[i] - 1) / 5 + 1;
        }
        printf("Case %d: %d\n", ii, ans);
    }
    return 0;
}