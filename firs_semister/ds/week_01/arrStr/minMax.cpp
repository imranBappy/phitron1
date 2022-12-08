#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 5;
    // int c = 2;
    // cout << "Min : " << min(c, min(a, b)) << endl;
    // cout << "Max : " << max(c, max(a, b)) << endl;

    int arr[5] = {2, 4, 1, 5, 0};
    int minmum = arr[0];
    for (int i = 1; i < 5; i++)
        minmum = max(arr[i], minmum);
    cout << minmum << endl;

    return 0;
}