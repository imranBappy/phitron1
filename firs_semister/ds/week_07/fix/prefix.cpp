#include "Stack.h"
#include <bits/stdc++.h>
using namespace std;

int dynamic_calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0;
    }
}
int conv_to_num(char c)
{
    return (int)c - 48;
}

int prefixEvaluation(string s)
{
    Stack<int> num;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[s.length() - i - 1];
        if (c > '0' && c <= '9')
            num.push((int)c - 48);
        else
            num.push(dynamic_calculate(num.pop(), num.pop(), c));
    }
    return num.pop();
} //+*423
int precisionCalc(char c)
{
    switch (c)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return -1;
    }
}
string make_prefix(string infix)
{
    string prefix;
    reverse(infix.begin(), infix.end());
    Stack<char> stack;
    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];
        if (c >= '0' && c <= '9')
            prefix += c;
        else if (')' == c)
            stack.push(c);
        else if ('(' == c)
        {
            while (')' != stack.Top() && !stack.isEmpty())
                prefix += stack.pop();
            if (!stack.isEmpty())
                stack.pop();
        }
        else
        {
            while (!stack.isEmpty() && precisionCalc(stack.Top()) >= precisionCalc(c))
                prefix += stack.pop();
            stack.push(c);
        }
    }
    while (!stack.isEmpty())
        prefix += stack.pop();
    reverse(prefix.begin(), prefix.end());
    // cout << infix << endl;
    return prefix;
}

int main()
{
    // (7+(4*5))-(2+0)
    // string s;
    // cout << "Enter prefix : ";
    // cin >> s;
    string prefix = make_prefix("s");
    cout << prefix << " : " << prefixEvaluation("+9*3/8 4")  << endl;
    return 0;
}