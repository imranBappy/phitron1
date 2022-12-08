#include "stack.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    Stack<int> stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        stack.push(data);
    }
    // stack.remove_middle();
    cout << "size : " << stack.size() << endl;
    stack.sort();
    while (!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }
    return 0;
}