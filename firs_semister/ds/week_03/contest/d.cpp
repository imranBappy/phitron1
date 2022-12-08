#include <bits/stdc++.h>
using namespace std;

int maxTime(int arr[], int n)
{
    int max = arr[0];
    int count = 0;
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > pre)
        {
            pre = count;
            max = arr[i];
        }
        count = 0;
    }
    return max;
}

int maxCount(int arr[], int n, int max)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
            count++;
    }
    return count;
}

int main()
{

    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int max = maxTime(arr, n);
        int count = maxCount(arr, n, max);
        cout << n - count << endl;
    }
    
    return 0;
}