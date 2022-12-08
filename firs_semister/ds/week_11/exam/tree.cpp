#include <bits/stdc++.h>
using namespace std;

int nodeNum(int y)
{
    int num = 1;
    for (int i = 1; i < y - 1; i++)
    {
        num *= 2;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (n == 2)
    {
        cout << 2 << endl;
        return 0;
    }
    long long int node = nodeNum(n);
    // cout << "node : " << node << endl;
    cout << (node * 2) * node << endl;

    return 0;
}