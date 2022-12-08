// A normal IO example code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, t;
    int cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % k == 0)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
