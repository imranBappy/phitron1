#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    // printf("n = %d\n", n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            for (int j = 1; j <= n; j++)
                printf("%d", j);
        else if (i > 1 && i < n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1)
                {
                    printf("%d", i);
                }
                else if (n == j)
                {
                    printf("%d", n);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if (n == i)
        {
            for (int j = 1; j <= n; j++)
                printf("%d", n);
        }
        printf("\n");
    }

    return 0;
}