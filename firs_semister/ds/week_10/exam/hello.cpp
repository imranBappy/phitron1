#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> s)
{
    if (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
void StackDebug(stack<int> s)
{
    vector<int> debugVector = vector<int>();
    while (!s.empty())
    {
        int t = s.top();
        debugVector.push_back(t);
        s.pop();
    }
    // stack, read from top down, is reversed relative to its creation (from bot to top)
    reverse(debugVector.begin(), debugVector.end());
    for (const auto &it : debugVector)
    {
        cout << it << " ";
    }
}
int main()
{

    stack<int> s;

    s.push(10);
    s.push(100);
    s.push(1000);
    s.push(1000);

    StackDebug(s);

    return 0;
}