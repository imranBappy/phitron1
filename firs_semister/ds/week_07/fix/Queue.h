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
class Queue
{
    Node<S> *rear;
    Node<S> *front;
    int length;

public:
    Queue()
    {
        this->rear = NULL;
        this->front = NULL;
        this->length = 0;
    }
    void push(S value)
    {
        Node<S> *newNode = new Node<S>(value);
        if (!this->front)
        {
            this->front = this->rear = newNode;
            return;
        }
        newNode->prev = this->rear;
        this->rear->next = newNode;
        this->rear = newNode;
        this->length++;
    }
    S pop()
    {
        S check;
        if (!this->front)
        {
            printf("Stack underflow!\n");
            return check;
        }
        if (this->front == this->rear)
        {
            S data = this->front->data;
            this->front = this->rear = NULL;
            return data;
        }
        S data = this->front->data;
        Node<S> *temp = this->front;
        this->front = this->front->next;
        this->front->prev = NULL;
        this->length--;
        delete temp;
        return data;
    }
    bool isEmpty()
    {
        if (!this->head)
            return true;
        return false;
    }
    int size()
    {
        return this->length + 1;
    }
    S Front()
    {
        S check;
        if (!this->front)
        {
            printf("Stack underflow!\n");
            return check;
        }
        return this->front->data;
    }
    S Back()
    {
        S check;
        if (!this->rear)
        {
            printf("Stack underflow!\n");
            return check;
        }
        return this->rear->data;
    }
    S mid()
    {
        Node<S> *node = this->front;
        Node<S> *fast;
        Node<S> *slow;
        fast = this->front;
        slow = this->front;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    }
    void print() // 0(n)
    {
        Node<S> *node = this->front;
        printf("head -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->next;
        }
        printf(" tail\n");
    }
};