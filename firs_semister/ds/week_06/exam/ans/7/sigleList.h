#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(int data)
    {
        srand(time(0));
        this->data = data;
        this->next = NULL;
    }
};
template <typename DT>
class LinkedList
{
public:
    Node<DT> *head = NULL;
    Node<DT> *tail = NULL;
    int length = 0;
    void push_back(int data) // 0(1)
    {
        Node<DT> *newNode = new Node<DT>(data);
        this->length++;
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void print() // 0(n)
    {
        Node<DT> *node = this->head;
        printf("head -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->next;
        }
        printf(" tail\n");
    }
    void print_reverse() // 0(n)
    {
        Node<DT> *node = this->tail;
        printf("tail -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->prev;
        }
        printf(" head\n");
    }
    Node<DT> *find_node(int data)
    {
        Node<DT> *node = this->head;
        while (node)
        {
            if (node->data == data)
                return node;
            node = node->next;
        }
        return NULL;
    }
};