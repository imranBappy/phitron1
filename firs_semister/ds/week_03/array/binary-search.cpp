#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}

// int binary_search(int arr[], int n, int target)
// {
//     int start = 0, end = n - 1, mid = 0;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[mid] < target)
//             start = mid + 1;
//         else if (arr[mid] > target)
//             end = mid - 1;
//     }
//     return -1;
// }
int binary_search(int arr[], int n, int target, int lv, int uv)
{
    if (lv <= uv)
    {
        int mid = (lv + uv) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            binary_search(arr, n, target, mid + 1, uv);
        else
            binary_search(arr, n, target, lv, mid - 1);
    }
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, n);
    print_arr(arr, n);
    int target;
    cin >> target;
    cout << binary_search(arr, n, target, 0, n - 1);
    return 0;
}