#include <stdio.h>

int main()
{

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    int person = n;
    int count = a;
    for (int i = 1; i <= k; i++)
    {
        // printf("i = %d\tcount = %d;\n", i, count);
        if (i == k)
        {
            break;
        }
        if (count == n)
        {
            count = 0;
        }

        count++;
    }
    printf("%d\n", count);
    return 0;
}