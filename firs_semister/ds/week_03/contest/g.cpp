#include <bits/stdc++.h>
using namespace std;
int main()
{

    // string s;
    // getline(cin, s);
    // string reserve = s;
    // reverse(reserve.begin(), reserve.end());
    // if (reserve == s)
    //     cout << "Yes\n";
    // else
    //     cout << "No\n";

    int n;
    cin >> n;
    int num = n;
    int reverse = 0;
    while (n)
    {
        reverse *= 10;
        reverse += (n % 10);
        n = n / 10;
    }
    // cout << reverse << endl;
    if (reverse == num)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}