#include <bits/stdc++.h>
using namespace std;
/*

*/
int main()
{

    int n, k, x, y, sum = 0;
    cin >> n >> k >> x >> y;
    if (k > n)
    {
        sum = x * n;
        cout << sum << endl;
        return 0;
    }
    sum = x * k;
    sum += y * (n - k);
    cout << sum << endl;

    return 0;
}