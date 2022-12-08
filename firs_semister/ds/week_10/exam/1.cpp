#include "bst.h"
#include <bits/stdc++.h>
using namespace std;
void preeOrder(Node *root);
void inOrder(Node *root);
void postOrder(Node *root);
void levelOrder(Node *root);
int findHight(Node *root, int level);

/*
inOrder : 6 8 9 11 12 14 15 20 26 30 35
preOrder : 15 11 8 6 9 12 14 26 20 30 35
postOrder : 6 9 8 14 12 11 20 35 30 26 15


Level : 0 : 15
Level : 1 : 11 26
Level : 2 : 8 12 20 30
Level : 3 : 6 9 14 35

Hight : 3



*/
void preeOrder(Node *root)
{
    if (root == NULL)
        return;
    printf("%d -> ", root->data);
    preeOrder(root->left);
    preeOrder(root->right);
}
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d -> ", root->data);
    inOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d -> ", root->data);
}

void levelOrder(Node *root, int level, int count)
{
    if (root == NULL)
        return;
    if (level == count)
        printf("%d -> ", root->data);
    levelOrder(root->left, level, count + 1);
    levelOrder(root->right, level, count + 1);
}
int findHight(Node *root, int level)
{
    static int count = 0;
    if (root == NULL)
        return count;
    if (count < level)
        count = level;
    findHight(root->left, level + 1);
    findHight(root->right, level + 1);
    return count;
}
void levelOrderTraversal(Node *root)
{
    int level = findHight(root, 0);
    for (int i = 0; i <= level; i++)
    {
        printf("Level : %d : ", i);
        levelOrder(root, i, 0);
        printf("\n");
    }
}
int main()
{
    BST t;
    int n, temp = 0;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        t.insert(t.root, temp);
    }

    // cout << findHight(t.root, 0) << endl;
    // t.print_postOrder(t.root);
    levelOrderTraversal(t.root);

    return 0;
}