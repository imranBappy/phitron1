#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int haf = n / 2;
    for (int j = haf, k = 1; j > 0; j--, k += 2)
    {
        for (int i = 0; i < j; i++)
            printf(" ");
        for (int i = 0; i < k; i++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < n; i++)
        printf("*");
    printf("\n");
    for (int j = 1, k = n - 2; j <= haf; j++, k -= 2)
    {
        for (int i = 0; i < j; i++)
            printf(" ");
        for (int i = 0; i < k; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*
 ***
******

*/