#include <bits/stdc++.h>
using namespace std;

/*
There are two rectangles. The lengths of the vertical sides of the first rectangle are AA, and the lengths of the horizontal sides of the first rectangle are BB. The lengths of the vertical sides of the second rectangle are CC, and the lengths of the horizontal sides of the second rectangle are DD.
Print the area of the rectangle with the larger area. If the two rectangles have equal areas, print that area.

*/

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a * b > c * d)
    {
        cout << a * b << endl;
    }
    else if (c * d > a * b)
    {
        cout << c * d << endl;
    }
    else
    {
        cout << a * b << endl;
    }
}
