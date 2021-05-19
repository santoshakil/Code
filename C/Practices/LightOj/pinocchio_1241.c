#include <stdio.h>
#include <string.h>

int a[20];

int main()
{
    int t;
    // Take test count
    scanf("%d", &t);
    // For each test case
    for (int i1 = 1; i1 <= t; i1++)
    {
        int n;
        // Take nose size
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            // Take next nose size
            scanf("%d", &a[i]);
        int ans = 0;
        a[0] = 2;
        // For each nose size
        for (int i = 0; i <= n - 1; i++)
        {
            // Check nose size difference
            if (a[i + 1] > a[i])
                ans += (a[i + 1] - a[i] - 1) / 5 + 1;
        }
        printf("Case %d: %d\n", i1, ans);
    }
    return 0;
}