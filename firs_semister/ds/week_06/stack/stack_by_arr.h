#include <bits/stdc++.h>
using namespace std;
#define STACK_MAX 1000
class Stack
{
public:
    int top;
    int data[STACK_MAX];
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (this->top == STACK_MAX)
        {
            printf("Stack overflow: %d\n", this->top);
            return;
        }
        this->top++; // (*this).top this->top;
        this->data[this->top] = value;
    }
    int pop()
    {
        if (this->top < 0)
        {
            printf("Stack is empty!");
            return -1;
        }
        int temp = this->data[this->top];
        this->top--;
        return temp;
    }
    int isEmpty()
    {
        if (this->top < 0)
            return 1;
        return 0;
    }
    void print_stack()
    {
        printf("top : %d\n", this->top);
        for (int i = 0; i <= this->top; i++)
        {
            printf("%d ", this->data[i]);
        }
        printf("\n");
    }
};
