#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", *arr + i);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int haf = (n) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr[haf] + i);
        if (i == haf)
        {
            continue;
        }
        sum += *(arr[i] + haf);
    }
    for (int i = 0; i < haf; i++)
    {
        sum += *(arr[0] + i);
        sum += *(arr[n - 1] + haf + 1 + i);
        sum += *(arr[i] + n - 1);
        sum += *(arr[n - 1 - i]);
    }

    printf("\nsum = %d\n", sum);

    return 0;
}