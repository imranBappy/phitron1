#include <stdio.h>

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int len = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < len / 2; i++)
    {
        int tamp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = tamp;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}