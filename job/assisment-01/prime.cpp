
#include <bits/stdc++.h>
using namespace std;

#define MAXN 100001

int primes[MAXN];

void sieve()
{
    primes[1] = 1;
    for (int i = 2; i < MAXN; i++)
        primes[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        primes[i] = 2;
    for (int i = 3; i * i < MAXN; i++)
    {
        if (primes[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)
                if (primes[j] == j)
                    primes[j] = i;
        }
    }
}

int get_factors(int x)
{
    int count = 0;
    while (x != 1)
    {
        count++;
        x = x / primes[x];
    }
    return count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    sieve();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int p = get_factors(x);
        cout << p << endl;
    }

    return 0;
}
