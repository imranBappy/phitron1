#include <bits/stdc++.h>
using namespace std;

/*
Snuke has a favorite restaurant.
The price of any meal served at the restaurant is 800800 yen

proti 15 ta order per por se 200 yen kore paibe


*/

int main()
{
    int n;
    cin >> n;
    int bell = 0;
    bell = 800 * n;
    bell -= floor(n / 15) * 200;

    cout << bell << endl;
    return 0;
}