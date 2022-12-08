#include <bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int prefix_sum[], int len)
{
    prefix_sum[0] = arr[0];
    for (int i = 1; i < len; i++)
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
}

int main()
{

    int len, q, t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        cin >> len >> q;
        int arr[len];
        int prefix[len];

        for (int i = 0; i < len; i++)
            cin >> arr[i];

        prefix_sum(arr, prefix, len);

        int start, end;
        int flag = 0;
        int index;
        int addIndex = 0, value = 0;
        cout << "Case " << k + 1 << ":" << endl;
        for (int i = 0; i < q; i++)
        {
            cin >> flag;
            if (flag == 1)
            {
                cin >> index;
                cout << arr[index] << endl;
                arr[index] = 0;
                prefix_sum(arr, prefix, len);
            }
            else if (flag == 2)
            {
                cin >> addIndex >> value;
                arr[addIndex] = arr[addIndex] + value;
                prefix_sum(arr, prefix, len);
            }
            else if (flag == 3)
            {
                cin >> start >> end;
                if (!start)
                {
                    cout << prefix[end] << endl;
                }
                else
                {
                    cout << prefix[end] - prefix[start - 1];
                }
            }
        }
    }

    return 0;
}