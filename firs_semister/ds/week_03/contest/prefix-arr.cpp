#include <bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int len)
{
    for (int i = 1; i < len; i++)
        arr[i] += arr[i - 1];
}

int main()
{
    int len;
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << "Arr : ";
    for (int i = 0; i < len; i++)
        cout << arr[i] << ", ";
    cout << endl;
    prefix_sum(arr, len);
    cout << "Prefix : ";
    for (int i = 0; i < len; i++)
        cout << arr[i] << ", ";
    cout << endl;

    int start;
    int end;
    cin >> start;
    cin >> end;
    if (!start)
    {
        cout << arr[end] << endl;
        return 0;
    }

    
    cout << arr[end] - arr[start - 1];

    return 0;
}