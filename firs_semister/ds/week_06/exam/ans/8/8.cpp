#include "linkedList.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    LinkedList<int> list;
    int k, m, n;
    cin >> k >> m >> n;
    for (int i = 0; i < k; i++)
    {
        int item;
        cin >> item;
        list.push_back(item);
    }
    int fast = 0;
    int second = 0;
    Node<int> *node = list.head;
    while (node)
    {
        if (fast < m)
        {
            printf("%d -> ", node->data);
            fast++;
            second = 0;
        }
        else if (second < n)
        {
            second++;
        }
        if (second >= n)
        {
            fast = 0;
        }
        node = node->next;
    }
    return 0;
}