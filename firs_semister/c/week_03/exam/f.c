#include <stdio.h>

void x_access_hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
void x_access_dot(int n, int m)
{
    int control = 1;
    x_access_hash(n);
    for (int i = 2; i <= m - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (control % 2 == 0)
            {
                printf("#");
                for (int j = 1, x = 1; j < n; j++)
                {
                    printf(".");
                }
                printf("\n");
                control++;
                continue;
            }
            for (int j = 1, x = 1; j < n; j++)
            {
                printf(".");
            }
            printf("#");
            control++;
            printf("\n");
        }
        else
        {
            x_access_hash(n);
        }
    }
    x_access_hash(n);
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    x_access_dot(m, n);
    return 0;
}