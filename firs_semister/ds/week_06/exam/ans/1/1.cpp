#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int frequency[max+1];
    for (int i = 0; i <= max; i++)
    {
        frequency[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (frequency[i] != 0)
        {
            cout << i << " => " << frequency[i] << endl;
        }
    }
    return 0;
}