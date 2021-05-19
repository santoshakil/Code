#include <stdio.h>
#include <string.h>

// Student object
struct shanta
{
    // Name
    char s[105];
    // volume = length * width * height
    long long a;
};

int main()
{
    int n, i, j, k, l, numberOfStudents, p;
    // number of test cases
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // number of students
        scanf("%d", &numberOfStudents);
        struct shanta name[200], temp;
        long long length[200], width[200], height[200], ck = 0;
        // for each student scan students name, chocolate length, width, height
        for (j = 0; j < numberOfStudents; j++)
        {
            scanf("%s %lld %lld %lld", name[j].s, &length[j], &width[j], &height[j]);
            // calculate volume
            name[j].a = length[j] * width[j] * height[j];
        }
        for (k = 0; k < numberOfStudents; k++)
        {
            for (l = 1 + k; l < numberOfStudents; l++)
            {
                if (name[k].a < name[l].a)
                {
                    strcpy(temp.s, name[l].s);
                    temp.a = name[l].a;

                    strcpy(name[l].s, name[k].s);
                    name[l].a = name[k].a;

                    strcpy(name[k].s, temp.s);
                    name[k].a = temp.a;
                }
            }
        }
        for (p = 0; p < numberOfStudents - 1; p++)
        {
            if (name[p].a == name[p + 1].a)
                ++ck;
        }
        if (numberOfStudents - 1 == ck)
            printf("Case %d: no thief\n", i);
        else
            printf("Case %d: %s took chocolate from %s\n", i, name[0].s, name[p].s);
    }
    return 0;
}