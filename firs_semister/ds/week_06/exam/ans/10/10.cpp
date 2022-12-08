#include "IMRAN_STACK.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << stack.mid();

    return 0;
}