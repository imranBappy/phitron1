#include <bits/stdc++.h>
using namespace std;

/*

Mina has decided to construct a string that starts with A and ends with Z, by taking out a substring of a string s (that is, a consecutive part of ss).

Find the greatest length of the string Mina can construct. Here, the test set guarantees that there always exists a substring of ss that starts with A and ends with Z.
*/
int main()
{

    string s;
    getline(cin, s);
    int n = s.length(), start = 0, end = 0, endFlag = 0, startFlag = 0;
    while (start <= n)
    {
        if (s[start] == 'A' and startFlag == 0)
            startFlag = 1;
        if (!startFlag)
            start++;
        if (s[n - end - 1] == 'Z' and endFlag == 0)
            endFlag = 1;
        if (!endFlag)
            end++;
        if (endFlag == 1 and startFlag == 1)
            break;
    }
    cout << n - (start + end) << endl;
    return 0;
}