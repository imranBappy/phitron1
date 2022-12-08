#include <bits/stdc++.h>
using namespace std;
/*
    k er theke k er ager sob soto element ta delete korte hobe
*/
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (arr[k] <= arr[i] || k <= i)
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}