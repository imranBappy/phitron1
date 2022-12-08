#include "sigleList.h"
#include <bits/stdc++.h>
using namespace std;
void print(Node<int> *node) // 0(n)
{
    while (node)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("\n");
}
Node<int> *reverse_list(Node<int> *head)
{
    Node<int> *carrent = head;
    Node<int> *prev = NULL, *next = carrent->next;
    while (1)
    {
        carrent->next = prev;
        prev = carrent;
        carrent = next;
        if (!carrent)
            break;
        next = next->next;
    }
    return prev;
}
Node<int> *reverseKNodes(Node<int> *head, Node<int> *tail, int k)
{
    Node<int> *node = head;
    Node<int> *fastTail = head;
    while (node->data != k)
    {
        node = node->next;
    }
    Node<int> *nextTail = node->next;
    node->next = NULL;
    Node<int> *newHead = reverse_list(head);
    Node<int> *newHead2 = reverse_list(nextTail);
    fastTail->next = newHead2;
    nextTail->next = NULL;
    nextTail->next = NULL;
    return newHead;
}
int main()
{
    LinkedList<int> list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int node;
        cin >> node;
        list.push_back(node);
    }
    int k;
    cin >> k;
    list.head = reverseKNodes(list.head, list.tail, k);
    list.print();
    return 0;
}