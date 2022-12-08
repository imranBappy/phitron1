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
void print_list(Node *node);
class Solution
{
public:
    Node *addTwoNumbers(Node *l1, Node *l2)
    {
        Node *dummyHead = new Node(0);
        Node *curr = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new Node(sum % 10);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return  dummyHead->next;

    
    }
};
void print_list(Node *node)
{
    while (node)
    {
        cout << node->val << ", ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
    MyLinkedList list1, list2;
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        list1.addAtTail(input);
    }
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        list2.addAtTail(input);
    }
    print_list(list1.head);
    print_list(list2.head);

    Solution solved;
    Node *result = solved.addTwoNumbers(list1.head, list2.head);
    print_list(result);

    return 0;
}
// 1999999999 2000000008