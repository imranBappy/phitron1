#include <bits/stdc++.h>
using namespace std;
/*

Assume a 2D array is declared as int arr[50][45]. The value of the base address of the array is arr[0][0] = 760. Find out the location of arr[6][13]. (An Integer is a word addressable (4 bytes) datatype)

ans ; 834
*/
int main()
{
    // int arr[50][45];
    // int *location = &arr[0][0] + (6 * 13);
    // int *location = arr[0] + (6 * 13);
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};
    // int *location = arr[0] + (2 * 1)-1;

    cout << "Location : " << 760 + (6 * 13) - 4 << endl;
    return 0;
}