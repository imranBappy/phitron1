#include <bits/stdc++.h>
using namespace std;
void inserting_sort(int arr[], int n)
{
    int item, i, j;
    for (i = 1; i < n; i++)
    {
        item = arr[i];
        j = i - 1;
        printf("%dst step:", i);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;

        printf(" -> ");
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    inserting_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}