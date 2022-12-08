#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyLinkedList
{
    int length = 0;

public:
    Node *head;
    Node *tail;
    MyLinkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    int get(int index)
    {
        int count = 0;
        if (0 > index || this->length <= index)
            return -1;

        Node *node = this->head;
        while (index > count)
        {
            node = node->next;
            count++;
        }
        return node->val;
    }
    void addAtHead(int val)
    {
        this->length++;
        Node *newNode = new Node(val);
        if (!this->head)
        {
            this->tail = newNode;
            this->head = newNode;
            return;
        }
        newNode->next = this->head;
        this->head->prev = newNode;
        this->head = newNode;
    }

    void addAtTail(int val)
    {
        this->length++;
        Node *newNode = new Node(val);
        if (!this->tail)
        {
            this->tail = newNode;
            this->head = newNode;
            return;
        }
        newNode->prev = this->tail;
        this->tail->next = newNode;
        this->tail = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (0 > index || this->length < index)
        {
            return;
        }
        else if (index == 0)
        {
            this->addAtHead(val);
            return;
        }
        else if (index == this->length)
        {
            this->addAtTail(val);
            return;
        }
        else
        {
            int count = 0;
            Node *node = this->head;
            Node *newNode = new Node(val);
            while (index > count)
            {
                node = node->next;
                count++;
            }
            newNode->next = node;
            newNode->prev = node->prev;
            node->prev->next = newNode;
            node->prev = newNode;
        }
        this->length++;
    }
    void deleteAtIndex(int index)
    {
        if (0 > index || this->length <= index)
        {
            return;
        }
        else if (this->head == this->tail)
        {
            delete this->head;
            this->tail = this->head = NULL;
        }
        else if (index == 0)
        {
            Node *temp = this->head;
            this->head = this->head->next;
            this->head->prev = NULL;
            delete temp;
        }
        else if (index == this->length - 1)
        {
            Node *temp = this->tail;
            this->tail = this->tail->prev;
            this->tail->next = NULL;
            delete temp;
        }
        else
        {
            int count = 0;
            Node *node = this->head;
            while (index > count)
            {
                node = node->next;
                count++;
            }
            node->prev->next = node->next;
            node->next->prev = node->prev;
            delete node;
        }
        this->length--;
    }
};

int main()
{

    MyLinkedList myLinkedList;
    myLinkedList.addAtHead(0);
    myLinkedList.addAtIndex(1, 4);
    myLinkedList.addAtTail(8);
    myLinkedList.addAtHead(5);
    myLinkedList.addAtIndex(4, 3);
    myLinkedList.addAtTail(0);
    myLinkedList.addAtTail(5);

    myLinkedList.addAtIndex(6, 3);
    myLinkedList.deleteAtIndex(7);
    myLinkedList.deleteAtIndex(5);
    myLinkedList.addAtTail(4);

    /*
    ["MyLinkedList","addAtHead","addAtIndex","addAtTail","addAtHead","addAtIndex","addAtTail","addAtTail","addAtIndex","deleteAtIndex","deleteAtIndex","addAtTail"]
    [[],[0]|,[1,4],[8],[5],[4,3],[0],[5],[6,3],[7],[5],[4]]
    */
    return 0;
}