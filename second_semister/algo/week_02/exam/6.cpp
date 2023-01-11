#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
/*
1 2 4 6 12
1 2 4 8 16

*/

int gcd2(int a, int b)
{
    if (b == 0)
        return a;
    int remainder = a % b;
    a = b;
    b = remainder;
    return gcd2(a, b);
}

int main()
{
    cout << gcd(12, 16) << endl;
    cout << gcd2(12, 16) << endl;
    return 0;
}