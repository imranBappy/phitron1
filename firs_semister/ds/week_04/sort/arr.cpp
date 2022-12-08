#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;
    int n = row * col;
    int arr[row][col];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", *arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *((*arr) + i));
    }
    return 0;
}