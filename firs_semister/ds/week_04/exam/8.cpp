#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class LinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void tail_add(Node *newNode)
    {
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *node = head;
        while (node->next)
        {
            node = node->next;
        }
        newNode->prev = node;
        // node->next = newNode;
        (*node).next = newNode;
        tail = newNode;
    }

    void head_add(Node *node)
    {
        if (!head)
        {
            head = node;
            return;
        }
        head->prev = node;
        node->next = head;
        head = node;
    }

    void print_list()
    {
        Node *node = head;
        printf("\nHead -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->next;
        }
        printf("NULL\n");
    }
    void reversedListPrint()
    {
        Node *node = tail;
        cout << endl;
        printf("Tail -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->prev;
        }
        printf("NULL\n");
    }
};

int main()
{
    LinkedList list;
    list.head_add(new Node(5));
    list.head_add(new Node(7));
    list.tail_add(new Node(1));
    list.tail_add(new Node(14));

    list.print_list();        // Head -> 200 -> 100 -> 500 -> NULL
    list.reversedListPrint(); // Tail -> 500 -> 100 -> 200 -> NULL
    cout << list.head->next->next->data << endl;
    return 0;
}