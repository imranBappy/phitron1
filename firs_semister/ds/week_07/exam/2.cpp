#include <bits/stdc++.h>
using namespace std;

/*

max = 9
arr = { 7, 2, 9, 2, 7, 4, 5, 1, }
count = { 0, 1, 2, 0, 1, 1, 0, 2, 0, 1, }
prefixArr = { 0, 1, 3, 3, 4, 5, 5, 7, 7, 8, }

step 1 :
output = { 1, 0, 0, 0, 0, 0, 0, 0, }
prefixArr = { 0, 0, 3, 3, 4, 5, 5, 7, 7, 8, }

step 2 :
output = { 1, 0, 0, 0, 5, 0, 0, 0, }
prefixArr = { 0, 0, 3, 3, 4, 4, 5, 7, 7, 8, }

step 3 :
output = { 1, 0, 0, 4, 5, 0, 0, 0, }
prefixArr = { 0, 0, 3, 3, 3, 4, 5, 7, 7, 8, }

step 4 :
output = { 1, 0, 0, 4, 5, 0, 7, 0, }
prefixArr = { 0, 0, 3, 3, 3, 4, 5, 6, 7, 8, }

step 5 :
output = { 1, 0, 2, 4, 5, 0, 7, 0, }
prefixArr = { 0, 0, 2, 3, 3, 4, 5, 6, 7, 8, }

step 6 :
output = { 1, 0, 2, 4, 5, 0, 7, 9, }
prefixArr = { 0, 0, 2, 3, 3, 4, 5, 6, 7, 7, }

step 7 :
output = { 1, 2, 2, 4, 5, 0, 7, 9, }
prefixArr = { 0, 0, 1, 3, 3, 4, 5, 6, 7, 7, }

step 8 :
output = { 1, 2, 2, 4, 5, 7, 7, 9, }
prefixArr = { 0, 0, 1, 3, 3, 4, 5, 5, 7, 7, }

output = { 1, 2, 2, 4, 5, 7, 7, 9, }

*/

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
        cout << output[i] << " ";
    return 0;
}