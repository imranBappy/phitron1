// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
Two students of AtCoder Kindergarten are fighting over candy packs.
There are three candy packs, each of which contains aa, bb, and cc candies, respectively.
Teacher Evi is trying to distribute the packs between the two students so that each student gets the same number of candies.
Determine whether it is possible.
Note that Evi cannot take candies out of the packs, and the whole contents of each pack must be given to one of the students.
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (a == b + c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else if (b > a && b > c)
    {
        if (b == a + c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else if (c > a && c > b)
    {
        if (c == a + b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else if (c > a && c > b)
    {
        if (c == a + b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}