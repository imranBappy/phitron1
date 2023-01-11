#include <bits/stdc++.h>
using namespace std;

int calculate(int n)
{
    if (n == 1)
        return 1;
    return n + calculate(n - 1);
}

int main()
{
    cout << calculate(5) << endl;
    return 0;
}