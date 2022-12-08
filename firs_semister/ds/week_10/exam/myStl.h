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
void insert(Node *&root, int k)
{
    if (root == NULL)
    {
        root = new Node(k);
        return;
    }
    Node *node = root;
    Node *curr = root;
    while (curr)
    {
        node = curr;
        if (curr->data > k)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if (node->data > k)
        node->left = new Node(k);
    else
        node->right = new Node(k);
}