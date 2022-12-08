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
    Node<T> *prev;
    Node<T> *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
        else
        {
            newNode->prev = tail;
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
        else if (this->head == this->tail)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            Node<DT> *temp = this->tail;
            temp->prev->next = NULL;
            tail = temp->prev;
            delete temp;
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
    /*
        worstCase : 0(1)
        bestCase : 0(n-1)
    */
    void insert_by_postion(int data, int position)
    {
        if (position > this->length + 1 || position < 1)
            return;
        if (position == this->length + 1)
        {
            this->push_back(data);
            return;
        }
        if (position == 1)
        {
            this->unshift(data);
            return;
        }
        Node<DT> *newNode = new Node<DT>(data);
        Node<DT> *node = this->head;
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
        this->length++;
    }
    /*
    worstCase : 0(1)
    bestCase : 0(n-1)
*/
    void insert_by_value(int value, int data)
    {
        Node<DT> *newNode = new Node<DT>(data);
        Node<DT> *node = this->head;
        if (!node)
            return;
        // this is 1 way 0(n)
        while (node->data != value)
        {
            node = node->next;
        }
        node->next->prev = newNode;
        newNode->next = node->next;
        newNode->prev = node;
        node->next = newNode;

        // this is 2nd way 0(n + n)
        // pos = this->search(value);
        // this->insert_by_postion(value, pos);
        // this->length++;

        // this is 3nd way  0(n + n)
        // int pos = 0;
        // while (node->data != value)
        // {
        //     pos++;
        //     node = node->next;
        // }
        // this->insert_by_postion(value, pos + 1);
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
    int search(int data)
    {
        Node<DT> *node = this->head;
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
        Node<DT> *node = this->head;
        int *positions = new int[this->length + 1];
        for (int i = 0; i < this->length + 1; i++)
            positions[i] = 0;
        int pos = 1;
        int len = 0;
        while (node)
        {
            if (node->data == data)
            {
                len++;
                positions[len] = pos;
            }
            node = node->next;
            pos++;
        }
        if (!len)
            cout << "Not found" << endl;
        positions[0] = len;
        return positions;
    }
    void remove_by_position(int pos)
    {
        if (pos > this->length || this->length == 0)
            return;
        else if (pos == this->length || this->length == 1)
        {
            this->pop();
            return;
        }

        Node<DT> *node = this->head;
        int count = 1;
        while (node->next && pos != count)
        {
            node = node->next;
            count++;
        }
        Node<DT> *temp = node;
        node->prev->next = node->next;
        node->next->prev = node->prev;
        this->length--;
        delete temp;
    }
    void remove_by_value(int data)
    {
        // this is a 1 st way and it is best way
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
        while (node->data != data)
        {
            node = node->next;
        }
        node->prev->next = node->next;
        node->next = node->prev;
        delete node;
        // this is 2nd way
        // int pos = this->search(data);
        // if (pos < 0)
        //     return;
        // this->remove_by_position(pos);
    }
    Node<DT> *reverse(Node<DT> *&head)
    {
        if (!head->next || !head)
        {
            head->prev = NULL;
            return head;
        }
        Node<DT> *newHead = reverse(head->next);
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
        Node<DT> *carrent = this->head;
        Node<DT> *prev = NULL, *next = carrent->next;
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
        Node<DT> *carrent = this->head;
        Node<DT> *prev = NULL, *next = carrent->next;
        Node<DT> *node = this->head;
        int len = this->length;
        for (int j = 0; j < len; j++)
        {
            for (int i = 1; i < len - j && carrent->next; i++)
            {
                next = carrent->next;
                swap(carrent->data, next->data);
                carrent = next;
            }
            carrent = head;
        }
    }
    Node<DT> *mid_pointer()
    {
        Node<DT> *slow = this->head, *fast = this->head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    void makeCycle(int data)
    {
        Node<DT> *node = this->head;

        while (node->data != data)
        {
            node = node->next;
        }
        this->tail->next = node;
    };
    void delete_cycle()
    {
        int pos = 1;
        Node<DT> *node = this->head;
        while (node)
        {
            if (pos == this->length)
            {
                node->next = NULL;
                return;
            }
            pos++;
            node = node->next;
        }
    }
    bool detect_cycle()
    {
        if (this->length < 3)
        {
            return false;
        }

        Node<DT> *slow = this->head, *fast = this->head->next->next;
        while (fast && fast->next)
        {
            if (fast == slow)
            {
                return true;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return false;
    }
    void remove_cycle() // 0(n+n)
    {
        if (this->length < 3)
        {
            return;
        }
        Node<DT> *slow = this->head, *fast = this->head;
        do
        {
            fast = fast->next->next;
            slow = slow->next;

        } while (slow != fast);
        fast = this->head;
        while (fast->next != slow->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
    void sort_list()
    {
        Node<DT> *node = this->head;
        int flag = 1;
        for (int i = 0; i < this->length; i++)
        {
            for (int j = 0; j < this->length - i - 1; j++)
            {
                if (node->data > node->next->data)
                {
                    swap(node->data, node->next->data);
                }
                node = node->next;
                flag = 0;
            }
            node = this->head;
            if (flag)
                return;
            flag = 1;
        }
    }
    void marge_list(Node<DT> *&nodes)
    {
        this->tail->next = nodes;
        while (nodes->next)
        {
            nodes = nodes->next;
            this->length++;
        }
        this->tail = nodes;
        this->length++;
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
    void print()
    {
        Node<S> *node = this->head;
        printf("stack : ");
        while (node)
        {
            printf("%d, ", node->data);
            node = node->next;
        }
        printf("\n");
    }
};
