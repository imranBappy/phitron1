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
    for (i = 1; i < n; i++)
    {
        j = i; // 2
        item = arr[i];
        while (0 < j && arr[j - 1] > item)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = item;
        
    }
    cout << arr[k - 1] << " " << arr[n - k] << endl;
    return 0;
}