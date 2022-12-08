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
    int m;
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    // all input top

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}