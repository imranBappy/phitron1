#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        int big = a;
        int small = a;
        cin >> a >> b >> c;

        // small
        if (a < b && a < c)
        {
            small = a;
        }
        if (b < a && b < c)
        {
            small = b;
        }
        if (c < b && c < a)
        {
            small = c;
        }
        // big
        if (a > b && a > c)
        {
            big = a;
        }
        if (b > a && b > c)
        {
            big = b;
        }
        if (c > b && c > a)
        {
            big = c;
        }

        if (a > small && a < big)
            cout << a << endl;
        else if (b > small && b < big)
            cout << b << endl;
        else if (c > small && c < big)
            cout << c << endl;
    }

    return 0;
}