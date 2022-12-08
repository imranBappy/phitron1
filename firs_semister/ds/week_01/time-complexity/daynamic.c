#include <stdio.h>
#include <stdlib.h>

int *dynamic_memory(int *arr, int *len, int n)
{
    int *newArr = (int *)malloc(n * sizeof(int));
    if (!arr)
        return newArr;
    for (int i = 0; i < *len; i++)
    {
        newArr[i] = arr[i];
    }
    *len = n;
    return newArr;
}

int main()
{

    int n = 3;
    int *arr = dynamic_memory(NULL, NULL, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    arr = dynamic_memory(arr, &n, n + 3);

    for (int i = 3; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}