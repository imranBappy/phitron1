#include <bits/stdc++.h>
using namespace std;
int binary_search(int *arr, int n, int target, int lv, int uv)
{
    if (lv <= uv)
    {
        int mid = (lv + uv) / 2;
        if (target == arr[mid])
            return mid;
        else if (arr[mid] < target)
            binary_search(arr, n, target, mid + 1, uv);
        else
            binary_search(arr, n, target, lv, mid - 1);
    }
    else
        return -1;
}

int max_num(int arr[], int n)
{
    int element = arr[0];
    for (int i = 1; i < n; i++)
        element = max(element, arr[i]);
    return element;
}

int *counting_sort(int arr[], int len)
{
    int max_element = max_num(arr, len);
    int count[max_element + 1];
    int *output = new int[len];
    int sum[len + 1];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < len; i++)
        count[arr[i]]++;
    sum[0] = count[0];

    for (int i = 1; i <= max_element; i++)
        sum[i] = count[i] + sum[i - 1];
    for (int i = len - 1; i >= 0; i--)
    {
        int k = arr[i];
        output[sum[k] - 1] = arr[i];
        sum[k] = sum[k] - 1;
    }
    return output;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *output = counting_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << output[i] << ' ';

    int result = binary_search(output, n, 3, 0, n - 1);
    cout << endl
         << result << endl;
    return 0;
}