#include "my_stl.h"
#include <bits/stdc++.h>
using namespace std;

Node<int> *reverse_list(Node<int> *head)
{
    if (!head->next || !head)
    {
        head->prev = NULL;
        return head;
    }
    Node<int> *newHead = reverse_list(head->next);
    head->next->next = head;
    head->prev = head->next;
    head->next = NULL;
    return newHead;
}

int main()
{
    LinkedList<int> list;
    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    // list.head = reverse_list(list.head);
    list.print();
    list.head = reverse_list(list.head);
    list.print();

    return 0;
}