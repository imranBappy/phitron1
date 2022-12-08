#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
        printf("*");
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}