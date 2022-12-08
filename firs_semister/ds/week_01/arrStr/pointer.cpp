#include <bits/stdc++.h>
using namespace std;

void print(int **x)
{
    **x = -111;
}

int main()
{
    int a = 10;
    int *p = &a;
    print(&p);
    cout << a << endl;
    return 0;
}