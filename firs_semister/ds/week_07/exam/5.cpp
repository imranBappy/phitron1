#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p = 12;
    int q = p + 4;
    int r = p + q;
    int s = r - 3;
    int t = r + s;
    cout << "p : " << p << "\nq : " << q << "\nr : " << r << "\ns : " << s << "\nt : " << t;

// a) head −> next −>next-> value = r : 28
// b) last −> prev −> next->value = t : 53
// c) temp −> prev −> prev −> prev= null
// d) temp −> next−> prev −>prev->value = q : 16
// e) last −> prev −> prev −>next-> value = s : 25
    return 0;
}
// 6404660 //6404660