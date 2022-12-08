#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> M;

    int arr[] = {2, 3, 1, 3, 4, 6, 8, 5, 1, 4};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        M[arr[i]]++;
    }

    for (auto element : M)
    {
        cout << element.first << " " << element.second << endl;
    }

    return 0;
}