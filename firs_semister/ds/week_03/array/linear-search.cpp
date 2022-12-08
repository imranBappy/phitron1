#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 100, 534, 10};
    int index = linear_search(arr, 10, 10);
    cout << index << endl;

    return 0;
}