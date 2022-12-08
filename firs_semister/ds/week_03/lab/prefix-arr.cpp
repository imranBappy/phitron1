#include <bits/stdc++.h>
using namespace std;
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

    for (int i = 1; i < len; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    cout << "Prefix : ";
    for (int i = 0; i < len; i++)
        cout << arr[i] << ", ";
    cout << endl;

    int start;
    int end;
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;

    if (start == 1)
    {
        cout << start << " to " << end << " = " << arr[end - 1];
        return 0;
    }

    cout << start << " to " << end << " = " << arr[end - 1] - arr[start - 2];

    return 0;
}