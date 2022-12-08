#include <stdio.h>
int min_of_arr(int arr[], int len);

int main()
{
    int arr[] = {1, 2, 3, -1, 4, 5, 6};
    int result = min_of_arr(arr, 7);

    printf("%d\n", result);
    return 0;
}
int min_of_arr(int arr[], int len)
{

    int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}