#include "Tree.h"
#include <bits/stdc++.h>
using namespace std;

/*
ABCAA
0
1 2
3 -1 -1 4
-1 -1 -1 -1
*/
Node<int> *input_tree(int len)
{
    int n = 0;
    cin >> n;
    if (n != -1)
        n = 2;
    Node<int> *head = new Node<int>(n);
    Node<int> **nodes = new Node<int> *[len];
    for (int i = 0; i < n; i++)
    {
        nodes[i] = new Node<int>(-1);
    }
    nodes[0] = head;
    int nodeLen = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        // printf("a = %d\n", a);
        // printf("b = %d\n", b);
        Node<int> *newNode1 = new Node<int>(a);
        Node<int> *newNode2 = new Node<int>(b);
        if (a != -1)
        {
            printf("a = %d\n", a);
            nodes[nodeLen]->left = newNode1;
            n += 2;
        }
        if (b != -1)
        {
            printf("b = %d\n", b);
            nodes[nodeLen]->right = newNode2;
            n += 2;
        }
        //
        if (a != -1)
        {
            nodes[nodeLen++] = newNode1;
        }
        if (b != -1)
        {
            nodes[nodeLen++] = newNode2;
        }
    }
    return nodes[0];
}

int main()
{

    Tree<int> *t = new Tree<int>(-1);
    t->root = input_tree(20);
    // t->preOrder(t->root);
    return 0;
}