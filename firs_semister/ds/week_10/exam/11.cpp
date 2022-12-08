#include <bits/stdc++.h>
using namespace std;
// result = 11446966 // (AEAAB6)H

int main()
{
    // 11440886 = AE92F6

    //  base + (type *( (total_row * col ) + index))
    // int base = 11440886;
    // int total_row = 100;
    // int col;
    // int index;
    // cin >> col >> index;

    // int result = base + (4 * ((total_row * col) + index));
    // cout << result << endl;

    int p = 12,
        q = p + 4,
        r = p + q,
        s = r - 3,
        t = r + s;

    printf("p = %d, q = %d, r = %d, s = %d, t = %d\n", p, q, r, s, t);
    return 0;
}