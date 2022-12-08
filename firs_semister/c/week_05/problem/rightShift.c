#include <stdio.h>

int main()
{

    int arr[] = {9, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int rightShift = arr[0];
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    arr[i] = rightShift;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
/*

    1, 2, 3, 4, 5
    2, 3, 4, 5, 1

*/