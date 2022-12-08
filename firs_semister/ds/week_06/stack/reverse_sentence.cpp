#include "stack_by_linkedlist.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    Stack<string> strStack;
    string str;
    getline(cin, str);
    string subStr = "";
    char c;
    for (int i = 0; i < str.length(); i++)
    {
        c = str.at(i);
        if (c == ' ')
        {
            strStack.push(subStr);
            subStr = "";
            continue;
        }
        subStr += c;
    }
    strStack.push(subStr);
    while (!strStack.isEmpty())
    {
        cout << strStack.Top() << endl;
        strStack.pop();
    }
    return 0;
}