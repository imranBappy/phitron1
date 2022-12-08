#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int *arr = new int[n]{0};
    cout << "Input : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Output : \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    delete arr;
    return 0;
}