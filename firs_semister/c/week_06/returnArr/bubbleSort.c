#include <stdio.h>
void bubbleSort(int arr[], int n);
int main()
{

    int n = 5;
    int arr[] = {3, 5, 2, 4, 1};
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
/*
3, 5, 2, 4, 1
3, 2, 4, 1, 5
3, 2, 4, 1, 5
*/