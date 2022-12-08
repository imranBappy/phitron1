#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    char str[n];
    char str1[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];
    for (int i = 0; i < n; i++)
        str1[i] = str[n - i - 1];

    for (int i = 0; i < n; i++)
    {
        if (str[i] != str1[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}