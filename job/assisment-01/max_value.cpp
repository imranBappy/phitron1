#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    int arr[100000];
    int n = 0;
    int q;
    // cin >> q;
    scanf("%d", &q);
    while (q--)
    {
        int op;
        // cin >> op;
        scanf("%d", &op);

        if (op == 1)
        {
            int val;
            // cin >> val;
            scanf("%d", &val);
            
            if (n == 0)
            {
                arr[n++] = val;
                continue;
            }
            int j = n - 1;
            while (j >= 0 && arr[j] > val)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = val;
            n++;
        }
        else
        {
            // cout << "n = " << n << endl;
            // cout << arr[n - 1] << endl;
            printf("%d\n", arr[n - 1]);
            n--;
        }
    }

    return 0;
}