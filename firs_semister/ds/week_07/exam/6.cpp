#include <bits/stdc++.h>
using namespace std;
/*
    linkedList.cpp
    Purpose: Data structure way to linked list
    @author Imran Hossen
    @version 1.0.0 16/08/2022
*/
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
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else if (head == tail)
        {
            tail = newNode;
            head->next = tail;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        this->length++;
    }
    void unshift(int data) // 0(1)
    {
        Node<DT> *newNode = new Node<DT>(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        this->length++;
    }
    void shift() // 0(1)
    {
        if (!this->head)
            return;
        Node<DT> *temp = head;
        head = head->next;
        delete temp;
        this->length--;
    }
    void pop() // 0(1)
    {
        if (!this->head)
            return;
        if (this->head == this->tail)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            Node<DT> *temp = this->head;
            while (temp->next->next)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            delete temp->next;
        }
        this->length--;
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

    void insert_by_value(int value, int data)
    {
        Node<DT> *newNode = new Node<DT>(data);
        Node<DT> *node = this->head;
        if (!node)
            return;
        while (node->data != value)
        {
            node = node->next;
        }
        newNode->next = node->next;
        node->next = newNode;
    }
    void insert_between(DT data, DT value1, DT value2)
    {
        Node<DT> *newNode = new Node<DT>(data);
        Node<DT> *node = this->head;
        if (!node)
            return;
        while (node->data != value1 && node->next->data != value2 && node->next)
        {
            node = node->next;
        }
        newNode->next = node->next;
        node->next = newNode;
    }
    void remove_by_value(int data)
    {
        Node<DT> *node = this->head;
        if (this->head->data == data)
        {
            this->shift();
            return;
        }
        if (this->tail->data == data)
        {
            this->pop();
            return;
        }
        while (node->next->data != data)
        {
            node = node->next;
        }
        Node<DT> *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
    void make_circular()
    {
        this->tail->next = this->head;
    }
};
int main()
{
    LinkedList<int> list;
    list.push_back(14);
    list.push_back(25);
    list.push_back(33);
    list.push_back(47);
    list.print();
    list.remove_by_value(14);
    list.insert_between(40, 33, 47);
    // list.make_circular();    
    list.print();

    return 0;
}