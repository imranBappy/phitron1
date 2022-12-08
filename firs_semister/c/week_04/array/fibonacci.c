#include <stdio.h>

int main()
{

    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d -> %d\n", i, arr[i]);
    }
    return 0;
}