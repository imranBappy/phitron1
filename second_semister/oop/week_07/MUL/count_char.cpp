#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int c = 0; c < n; c++)
    {
        int l;
        cin >> l;
        char s[l + 1];
        for (int ll = 0; ll < l; ll++)
        {
            cin >> s[ll];
        }
        char large = s[0];
        for (int i = 0; i < l; i++)
        {
            if (large < s[i])
                large = s[i];
        }
        int x = large - 'a' + 1;
        cout << x << endl;

    }

    return 0;
}