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
    void push_back(Node *newNode)
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
    void pop_back()
    {
        Node *node = tail->prev;
        node->next = NULL;
        delete tail;
        tail = node;
    }
    void push_front(Node *node)
    {
        head->prev = node;
        node->next = head;
        head = node;
    }
    void pop_front()
    {
        Node *node = head->next;
        node->prev = NULL;
        delete head;
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
    void reverse_print()
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
    Node *find(int data)
    {
        Node *node = head;
        while (node)
        {
            if (node->data == data)
            {
                return node;
            }
            node = node->next;
        }
        return NULL;
    }
    void remove(int data)
    {
        Node *node = this->find(data);
        if (!node)
        {
            printf("Node Not Found!\n");
            return;
        }
        else if (!node->prev)
        {
            node->next->prev = NULL;
            this->head = node->next;
        }
        else if (!node->next)
        {
            node->prev->next = NULL;
            this->tail = node->prev;
        }
        else
        {
            node->next->prev = node->prev;
            node->prev->next = node->next;
        }
        delete node;
    }
};

int sum(Node *head)
{
    int Sum = 0;

    Node *Temp = head;

    while (Temp->data != 14)
    {
        Sum += Temp->data;
        Temp = Temp->next;
    }

    Sum -= Temp->data;
    return Sum;
}

int main()
{

    LinkedList list;

    // for (int i = 0; i < 50; i++)
    // {
    //     list.push_back(new Node(i));
    // }

    // list.print_list();
    // Node *node = list.find(20);
    // if (node)
    // {
    //     printf("%d, ", node->data);
    // }

    // list.print_list();
    // list.reverse_print();
    // list.remove(30);
    // list.print_list();
    // list.reverse_print();

    int option = 1;
    int data;

printAll:
    cout << endl;
    printf("\t***ALL OPTIONS***\n");
    printf("0. Exit\n");
    printf("1. Push Back\n");
    printf("2. Push Front\n");
    printf("3. Pop Back\n");
    printf("4. Pop Front\n");
    printf("5. Remove Node\n");
    printf("6. Find Node\n");
    printf("7. Print Linked List\n");
    printf("8. Reverse Print Linked List \n\n");
    printf("Enter the option (0 to 8) : ");
    cin >> option;
    cout << endl;
    if (option == 0)
    {
        printf("Bye Bye!\n");
        return 1;
    }
    else if (option == 1)
    {
        cout << "Enter value : ";
        cin >> data;
        list.push_back(new Node(data));
    }
    else if (option == 2)
    {
        cout << "Enter value : ";
        cin >> data;
        list.push_front(new Node(data));
    }
    else if (option == 3)
    {
        list.pop_back();
    }
    else if (option == 4)
    {
        list.pop_front();
    }
    else if (option == 5)
    {
        cout << "Enter value : ";
        cin >> data;
        list.remove(data);
    }
    else if (option == 6)
    {
        cout << "Enter value : ";
        cin >> data;
        Node *node = list.find(data);
        if (!node)
        {
            cout << "Not Found Node\n";
            goto printAll;
        }
        printf("Value -> %d\n", node->data);
    }
    else if (option == 7)
    {
        list.print_list();
    }
    else if (option == 8)
    {
        list.reverse_print();
    }
    else if (option == 9)
    {
        int res = sum(list.head);
        printf("sum = %d\n", res);
    }
    goto printAll;
    return 0;
}