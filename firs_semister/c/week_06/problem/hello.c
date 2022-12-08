#include <stdio.h>

int main()
{
    int n = 5;
    int a[n];
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod = prod * a[i];
    }
    printf("%d", prod);

    return 0;
}