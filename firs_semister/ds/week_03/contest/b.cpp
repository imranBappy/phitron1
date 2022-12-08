#include <bits/stdc++.h>
using namespace std;
// 7.15

void findMin(int arr[], int i, int j)
{
    int min = arr[i - 1];
    while (i < j)
    {
        if (min > arr[i])
            min = arr[i];
        i++;
    }
    cout << min << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    char c;
    int n, q;
    int i, j;

    for (int l = 0; l < t; l++)
    {
        cin >> n;
        int arr[n];
        cin >> q;

        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
        }
        cout << "Case " << l + 1 << ":\n";
        for (int k = 0; k < q; k++)
        {
            cin >> i;
            cin >> j;
            findMin(arr, i, j);
        }
    }

    return 0;
}