#include <stdio.h>
int find_max(int arr[], int len);
int secondMax(int arr[], int len, int max);

int main()
{
    int arr[] = {6, 2, 1, 3, 5, 4};
    int len = 6;
    int max = find_max(arr, len);
    int result = secondMax(arr, len, max);
    printf("result = %d\n", result);
    return 0;
}

int find_max(int arr[], int len)
{

    int max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int secondMax(int arr[], int len, int max)
{

    int second_max = arr[0];
    if (second_max == max)
    {
        second_max = arr[1];
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != max && second_max < arr[i])
        {
            second_max = arr[i];
        }
    }
    printf("Second max value = %d\n", second_max);
    return second_max;
}
/*
    [6, 2, 1, 3, 5, 4]

    max = [0] 3
    2nd_max = [1] 2
*/