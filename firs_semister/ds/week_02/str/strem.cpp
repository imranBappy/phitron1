// #include <iostream>
// #include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "Hello, world Imra!";
    stringstream stream(s);
    stream << "AA, CC, AA, CCC";
    string w;
    c777out << s << endl;
    while (stream >> w)
    {
        cout << w << endl;
    }

    return 0;
}