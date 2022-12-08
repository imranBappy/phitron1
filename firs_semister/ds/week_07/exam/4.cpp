#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size = 4;
    int base = 1230;
    int total_col = 65;
    int row = 3;
    int cell = 18;
    /*
    {   100 + size *((total_cal * row) + (cell-1))
        {1,2,3} 100, 104, 108
        {1,2,3} 112, 116, 120
        {1,2,3} 124, 128, 132
    }
    */
    // size = 4;
    // base = 100;
    // total_col = 3;
    // row = 1;
    // cell = 2;
    // cout << base + size * ((total_col * row) + (cell)) << endl;
    // arr[2][2]
    size = 4;
    base = 1230;
    // arr[70][65]
    total_col = 65;
    row = 3;
    cell = 18;
    // arr[3][18]
    int result = base + size * ((total_col * row) + (cell));
    cout << result; // 2082
    return 0;
}