#include "linkedList.h"
#include <bits/stdc++.h>
using namespace std;
void replace_even_num(LinkedList<int> *list)
{
    Node<int> *node = list->head;
    while (node)
    {
        if (node->data % 2 == 0)
        {
            node->data = -1;
        }
        node = node->next;
    }
}
int main()
{
    LinkedList<int> list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list.push_back(x);
    }
    replace_even_num(&list);
    list.print();
    return 0;
}