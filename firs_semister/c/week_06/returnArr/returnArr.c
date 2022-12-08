#include <stdio.h>
#include <stdlib.h>
int *makeCopy(int n, int in[])
{
    int *out = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        out[i] = in[i];
    }
    return out;
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *b;
    b = makeCopy(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", b[i]); //*(b + i)
    }

    return 0;
}