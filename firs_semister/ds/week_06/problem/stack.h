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
template <typename D>
class Stack
{
    Node<D> *head;
    Node<D> *tail;
    int length;

public:
    Stack()
    {
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }
    void push(D data)
    {
        Node<D> *newNode = new Node<D>(data);
        this->length++;
        if (!this->head)
        {
            this->head = this->tail = newNode;
            return;
        }
        this->tail->next = newNode;
        newNode->prev = this->tail;
        this->tail = newNode;
    }
    D pop()
    {
        D data;
        this->length--;
        if (!this->head)
        {
            printf("Stack underflow!\n");
            return data;
        }
        if (this->head == this->tail)
        {
            data = this->head->data;
            this->head = this->tail = NULL;
            return data;
        }
        Node<D> *temp = this->tail;
        data = this->tail->data;
        this->tail = this->tail->prev;
        this->tail->next = NULL;
        delete temp;
        return data;
    }
    bool isEmpty()
    {
        return (length == 0) ? true : false;
    }
    D top()
    {
        return this->tail->data;
    }
    int size()
    {
        return this->length;
    }
    void remove_middle()
    {
        Node<D> *fast;
        Node<D> *slow;
        if (!this->head)
        {
            printf("Stack underflow!\n");
            return;
        }
        fast = slow = this->head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->prev->next = slow->next;
        slow->next->prev = slow->prev;
        delete slow;
        this->length--;
    }
    void sort()
    {
        Node<D> *node = this->head;
        int flag = 1;
        for (int i = 0; i < this->size(); i++)
        {
            while (node->next)
            {
                if (node->data > node->next->data)
                {
                    swap(node->data, node->next->data);
                    flag = 0;
                }
                node = node->next;
            }
            node = this->head;
            if (flag)
                return;
            flag = 1;
        }
    }
};