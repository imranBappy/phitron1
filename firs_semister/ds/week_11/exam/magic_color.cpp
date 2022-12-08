#include <bits/stdc++.h>
using namespace std;

char match_color(char c1, char c2)
{
    if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R'))
        return 'P';
    else if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R'))
        return 'Y';
    else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B'))
        return 'C';
    else
        return c2;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, len = 0;
        cin >> n;
        char output[n], a, b;
        for (int i = 0; i < n - 1; i += 2)
        {
            cin >> a >> b;
            if (a == b)
                continue;
            char match = match_color(a, b);
            if (match == output[len - 1])
            {
                len--;
            }
            else
            {
                output[len++] = match_color(a, b);
            }
        }
        if (n % 2 != 0)
        {
            cin >> a;
            output[len++] = (a);
        }
        for (int i = 0; i < len - 1; i += 2)
        {
            if (output[i] == output[i + 1])
                continue;
            printf("%c%c", output[i], output[i + 1]);
        }
        if (len % 2 != 0)
        {
            printf("%c", output[len - 1]);
        }
        printf("\n");
    }

    return 0;
}