#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *next;
    Node *prev;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
template <typename S>
class Stack
{
    Node<S> *top;
    Node<S> *head;
    int length;

public:
    Stack()
    {
        this->top = NULL;
        this->head = NULL;
        this->length = 0;
    }
    void push(S value)
    {
        Node<S> *newNode = new Node<S>(value);
        if (!this->head)
        {
            this->head = this->top = newNode;
            return;
        }

        newNode->prev = this->top;
        this->top->next = newNode;
        this->top = newNode;
        this->length++;
    }
    S pop()
    {
        S check;
        if (!this->head)
        {
            printf("Stack underflow!\n");
            return check;
        }
        if (this->head == this->top)
        {
            S data = this->head->data;
            this->head = this->top = NULL;
            return data;
        }
        S data = this->top->data;
        Node<S> *temp = this->top;
        this->top = this->top->prev;
        top->next = NULL;
        this->length--;
        delete temp;
        return data;
    }
    bool isEmpty()
    {
        if (!this->top)
            return true;
        return false;
    }
    int size()
    {
        return this->length + 1;
    }
    S Top()
    {
        S check;
        if (!this->head)
        {
            printf("Stack underflow!\n");
            return check;
        }
        return this->top->data;
    }
};
