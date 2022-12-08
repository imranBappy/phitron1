#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int firstMin = 0;
    int secondMin = 1;
    for (int i = 0; i < n; i++)
        if (arr[firstMin] > arr[i])
            firstMin = i;
    for (int i = 0; i < n; i++)
    {
        if (firstMin != i && arr[firstMin] == arr[i])
        {
            secondMin = i;
            break;
        }
        else if (arr[firstMin] < arr[i] && arr[secondMin] > arr[i])
        {
            secondMin = i;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << arr[firstMin] << endl;
    // cout << arr[secondMin] << endl;
    if (firstMin > 0)
    {
        swap(arr[firstMin - 1], arr[secondMin]);
    }
    else if (firstMin < n - 1)
    {
        swap(arr[firstMin + 1], arr[secondMin]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int prefixSum[n];

    for (int i = 0; i < n - 1; i++)
    {
        prefixSum[i] = arr[i] + arr[i + 1];
    }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefixSum[i] << " ";
    // }
    int min = prefixSum[0];
    for (int i = 0; i < n - 1; i++)
        if (min > prefixSum[i])
            min = prefixSum[i];

    printf("%d\n", min);
    return 0;
}
// 85