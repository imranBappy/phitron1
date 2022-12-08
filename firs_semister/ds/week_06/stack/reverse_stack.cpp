#include "stack_by_linkedlist.h"
#include <bits/stdc++.h>
using namespace std;
void insert_at_buttom(Stack<int> *stack, int item)
{
    if (stack->isEmpty())
    {
        stack->push(item);
        return;
    }
    int temp = stack->pop();
    insert_at_buttom(stack, item);
    stack->push(temp);
}
void reverse_stack(Stack<int> *stack)
{
    if (stack->isEmpty())
        return;
    int topElement = stack->pop();
    reverse_stack(stack);
    insert_at_buttom(stack, topElement);
}
int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // while (!stack.isEmpty())
    // {
    //     cout << stack.pop() << endl;
    // }
    reverse_stack(&stack);
    while (!stack.isEmpty())
    {
        cout << stack.pop() << endl;
    }

    return 0;
}