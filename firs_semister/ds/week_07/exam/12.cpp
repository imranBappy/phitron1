#include "my_stl.h"
#include <bits/stdc++.h>
/*
1, delecred a linked list and input the elements
2 delecred a stack
3, traverse linked list and elment if elment < 0 then then minus number and pop the stack then stack isEmpty or number is 0 is true then break the loop otherwise push the element in the stack
*/
using namespace std;
int main()
{
    LinkedList<int> list;
    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    // list.print();
    Node<int> *node = list.head;
    Stack<int> stack;
    while (node)
    {
        int data = node->data;
        if (data < 0)
        {
            while (data && !stack.isEmpty())
            {
                data = stack.pop() + data;
            }
        }
        else
            stack.push(data);
        node = node->next;
        // stack.print();
    }
    if (stack.isEmpty())
        cout << 0 << endl;

    while (!stack.isEmpty())
        cout << " -> " << stack.pop();

    return 0;
}