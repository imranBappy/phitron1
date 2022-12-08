#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int i, j, item;
    for (i = 1; i < n; i++)
    {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}
int main()
{
    int arr[5] = {5, 2, 3, 1, 2};
    insertion_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}