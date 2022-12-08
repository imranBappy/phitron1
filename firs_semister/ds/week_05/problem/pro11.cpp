#include <bits/stdc++.h>
using namespace std;
/*
100 13 20 4 15 17
*/
int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    int i, j, item;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int minmax, maximum;
    minmax = maximum = arr[0];

    for (i = 3; i < n; i++)
    {
        for (j = i + 1; j < n - i; j++)
        {
            minmax = min(minmax, arr[j]);
            maximum = max(maximum, arr[j]);
        }
    }
    cout << "minmax: " << minmax << " maximum: " << maximum << endl;
    return 0;
}