#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head = NULL;
    Node *tail = head;
    int length = 0;
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (!head) // 0(1)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }
    void unshift(int data)
    {
        Node *newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        length++;
    }
    void shift()
    {
        if (!this->head) // 0(1)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void pop()
    {
        if (!this->head) // 0(1)
            return;
        else if (this->head == this->tail)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            Node *newNode = this->tail;
            newNode->prev->next = NULL;
            tail = newNode->prev;
            delete newNode;
        }
        length--;
    }
    void print_list()
    {
        Node *node = this->head;
        printf("head -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->next;
        }
        printf(" tail\n");
    }
    void print_reverse()
    {
        Node *node = this->tail;
        printf("tail -> ");
        while (node)
        {
            printf("%d -> ", node->data);
            node = node->prev;
        }
        printf(" head\n");
    }
    void insert(int data, int position)
    {
        if (position > this->length + 1 || position < 1)
            return;
        if (position == this->length + 1)
        {
            this->push(data);
            return;
        }
        if (position == 1)
        {
            this->unshift(data);
            return;
        }
        Node *newNode = new Node(data);
        Node *node = this->head;
        int pos = 1;
        while (pos != position)
        {
            node = node->next;
            pos++;
        }
        newNode->prev = node->prev;
        newNode->next = node;
        node->prev->next = newNode;
        node->prev = newNode;
        length++;
    }
    void insertByValue(int value, int data)
    {
        // 1,2,3,4,5
        Node *newNode = new Node(data);
        Node *node = this->head;
        if (!node)
            return;
        // this is 1 way
        int pos = 0;
        pos = this->search(value);
        this->insert(value, pos);
        this->length++;
        // this is 2nd way

        // while (node->data != value)
        // {
        //     pos++;
        //     node = node->next;
        // }
        // this->insert(value, pos + 1);

        // this is 3nd way
        // node->next->prev = newNode;
        // newNode->next = node->next;
        // newNode->prev = node;
        // node->next = newNode;
    }
    int search(int data)
    {
        Node *node = this->head;
        int pos = 1;
        while (node)
        {
            if (node->data == data)
                return pos;
            node = node->next;
            pos++;
        }
        return -1;
    }
    int *search_for_duplicate(int data)
    {
        Node *node = this->head;
        int *positions = new int[this->length + 1];
        for (int i = 0; i < this->length + 1; i++)
            positions[i] = 0;
        int pos = 1;
        int len = 0;
        while (node)
        {
            if (node->data == data)
            {
                positions[len + 1] = pos;
                len++;
            }
            node = node->next;
            pos++;
        }
        if (!len)
            cout << "Not found" << endl;
        positions[0] = len;
        return positions;
    }
    void remove(int pos)
    {
        if (pos > this->length || this->length == 0)
            return;
        else if (pos == this->length || this->length == 1)
        {
            this->pop();
            this->length--;
            return;
        }

        Node *node = this->head;
        int count = 1;
        while (node->next && pos != count)
        {
            node = node->next;
            count++;
        }
        Node *temp = node;
        node->prev->next = node->next;
        node->next->prev = node->prev;
        this->length--;
        delete temp;
    }
    void removeByValue(int data)
    {
        int pos = this->search(data);
        if (pos < 0)
            return;
        this->remove(pos);
    }
    Node *reverse(Node *&head)
    {
        if (!head->next || !head)
        {
            head->prev = NULL;
            return head;
        }
        Node *newHead = reverse(head->next);
        if (!head->prev)
            this->tail = head;
        head->next->next = head;
        head->prev = head->next;
        head->next = NULL;
        return newHead;
    }

    void reverse_list_with_recursive()
    {
        this->head = this->reverse(this->head);
    }
    void reverse_list()
    {
        Node *carrent = this->head;
        Node *prev = NULL, *next = carrent->next;
        this->tail = this->head;
        while (1)
        {
            carrent->prev = next;
            carrent->next = prev;
            prev = carrent;
            carrent = next;
            if (!carrent)
                break;
            next = next->next;
        }
        this->head = prev;
    }
    void reverse_list_by_nested()
    {
        Node *carrent = this->head;
        Node *prev = NULL, *next = carrent->next;
        Node *node = this->head;
        int len = this->length;
        for (int j = 0; j < len; j++)
        {
            for (int i = 1; i < len - j && carrent->next; i++)
            {
                next = carrent->next;
                swap(carrent->data, next->data);
                carrent = carrent->next;
            }
            carrent = head;
        }
    }
};
