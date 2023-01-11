#include <bits/stdc++.h>
using namespace std;

int N = 100000;
int all_factor[100000];

int all_prime_factor()
{
    int count = 0;
    int p = 2;
    for (int i = 2; i <= N; i += 2)
        all_factor[i]++;
    for (int i = 3; i <= N; i++)
    {
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    memset(all_factor, 0, sizeof(all_factor));

    int n, num;
    scanf("%d", &n);
    // cout << "n =  " << n << endl;

    while (n--)
    {
        scanf("%d", &num);
        // cout << "num =  " << num << endl;
        int result = find_prime_factor(num);
        printf("%d\n", result);
    }

    return 0;
}