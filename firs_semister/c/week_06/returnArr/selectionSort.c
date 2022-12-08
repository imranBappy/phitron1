#include <stdio.h>

int findMin(int arr[], int n, int i);
void selectionSort(int arr[], int n);
int min(int a, int b);
int main()
{
    int n = 5;
    int arr[] = {3, 5, 2, 4, 1};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
int findMin(int arr[], int n, int i)
{
    int smallest = i;
    for (; i < n; i++)
    {
        if (arr[smallest] < arr[i])
        {
            smallest = i;
        }
    }
    return smallest;
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallest = findMin(arr, n, i);
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}
int min(int a, int b)
{
    return a < b ? a : b;
}
/**


**/