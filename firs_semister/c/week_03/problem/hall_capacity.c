#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p, q, count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &q);
        if (p != q)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}