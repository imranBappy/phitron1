#include "bst.h"
#include <bits/stdc++.h>
using namespace std;

void level_order(Node *root)
{
    int level = 0;
    queue<Node *> nodes;
    printf("Level %d : ", level);
    nodes.push(root);
    nodes.push(NULL);
    while (nodes.size() > 1)
    {
        Node *current = nodes.front();
        if (current == NULL)
        {
            level++;
            nodes.pop();
            nodes.push(NULL);
            printf("\nLevel %d : ", level);
        }
        if (current)
        {
            if (current->left)
                nodes.push(current->left);
            if (current->right)
                nodes.push(current->right);
            printf("%d ->", current->data);
            nodes.pop();
        }
    }
}

int main()
{
    BST t;
    int n, temp;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        t.insert(t.root, temp);
    }
    level_order(t.root);
    return 0;
}