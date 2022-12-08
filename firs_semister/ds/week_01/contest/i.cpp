#include <bits/stdc++.h>
using namespace std;

/*

*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b - a == c - b)
    {
        cout << "YES";
    }
    else if (a - b == b - c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}