#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, currentCount = 1, max = 0;
    cin >> n;
    char currentChar, previousChar;
    cin >> currentChar;
    previousChar = currentChar;

    for (int i = 1; i < n; i++)
    {
        cin >> currentChar;
        if (currentChar != previousChar)
        {
            if (max < currentCount)
                max = currentCount;
            currentCount = 0;
        }
        currentCount++;
        previousChar = currentChar;
    }
    if (max < currentCount)
        max = currentCount;
    cout << max << endl;
    return 0;
}