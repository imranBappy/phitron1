#include <bits/stdc++.h>
using namespace std;

/*
 */
int main()
{
    int n;
    cin >> n;
    int i, j, item, k;
    printf("1, ");
    int flag = 0;
    for (i = 2; i <= n; i++)
    {
        int len = (i + 1) / 2;
        for (k = 2; k <= len; k++)
        {
            // printf("%d / %d\n", i, k);

            if (i % k == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;

        flag = 0;
        printf("%d, ", i);
    }
    printf("%d, ", n);

    return 0;
}