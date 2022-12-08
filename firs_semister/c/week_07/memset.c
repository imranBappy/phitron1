#include <stdio.h>
#include <string.h>
int main()
{

    int n = 10;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        arr[i] = 10;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}