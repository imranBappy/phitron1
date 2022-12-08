#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int days;
    for (int i = 0; i < t; i++)
    {
        cin >> days;
        int mony[days];
        int shopping[days];
        for (int j = 0; j < days; j++)
        {
            cin >> mony[j];
        }
        for (int j = 0; j < days; j++)
        {
            cin >> shopping[j];
        }
        int q;
        cin >> q;
        int mony_sum[days];
        mony_sum[0] = mony[0];
        int shopping_sum[days];
        shopping_sum[0] = shopping[0];
        for (int j = 1; j < days; j++)
        {
            mony_sum[j] = mony_sum[j - 1] + mony[j];
            shopping_sum[j] = shopping_sum[j - 1] + shopping[j];
        }
        for (int j = 0; j < q; j++)
        {
            int x;
            cin >> x;
            int balance = mony_sum[x] - shopping_sum[x];
            if (balance >= 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        cout << endl;
    }

    return 0;
}