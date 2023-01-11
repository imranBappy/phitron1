#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int b;
        cin >> b;
        int prime = 2;
        int count = 0;
        while (b > 1)
        {
            while (b % prime == 0)
            {
                b /= prime;
                count++;
            }
            prime++;
        }
        printf("%d\n", count);
    }

    return 0;
}