#include <bits/stdc++.h>
using namespace std;
int maxTime(int arr[], int n)
{
    // 6 4 1 1 4 1
    int maxTime = 1;
    int count = 0;
    int very = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxTime)
        {
            maxTime = count;
            very = i;
        }
        count = 0;
    }
    return very;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int max = maxTime(arr, n);
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[max] != arr[j])
                count++;
        cout << count << endl;
    }

    return 0;
}