#include <stdio.h>

int min_to_max(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int max_to_min(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int isSorted(int *arr, int len)
{
    int result;
    if (arr[0] < arr[1])
    {
        result = min_to_max(arr, len);
    }
    else if (arr[0] > arr[1])
    {
        result = max_to_min(arr, len);
    }
    else
    {
        if (min_to_max(arr, len) || max_to_min(arr, len))
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
}
int main()
{
    int arr[] = {1, 1, 1, 1, 2};
    int res = isSorted(arr, 5);
    printf("Result = %d\n", res);
    if (res)
    {
        printf("Tha array is sorted\n");
    }
    else
    {
        printf("Tha array is unsorted\n");
    }

    return 0;
}
