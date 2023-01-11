#include <bits/stdc++.h>
using namespace std;
int all[10000];
int len = 0;
void backTracking(int arr[], int n, int i, int j)
{
    all[len++] = arr[i] * arr[j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            backTracking(arr, n, i, j);
        }
    }
}

int main()
{
    int x[] = {-12, -4, -17, -9};

    backTracking(x, 4, 0, 0);
    cout << "Hello World" << endl;

    for (int i = 0; i < len; i++)
    {
        cout << all[i] << " ";
    }
    cout << "Hello World" << endl;
    return 0;
}