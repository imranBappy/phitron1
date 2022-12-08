#include "bst.h"
#include <iostream>
using namespace std;

void left_side(Node *root);

void left_side(Node *root)
{
    if (root->left == NULL)
        return;
    printf("%d -> ", root->data);
    left_side(root->left);
}
void right_side(Node *root)
{
    if (root->right == NULL)
        return;
    printf("%d -> ", root->data);
    right_side(root->right);
}
void non_leaf(Node *root)
{
    if (root == NULL)
        return;
    if (root->right == NULL && root->left == NULL)
        printf("%d -> ", root->data);
    non_leaf(root->left);
    non_leaf(root->right);
}

void boundary_traversal(Node *root)
{
    left_side(root);
    non_leaf(root);
    right_side(root->right);
    printf("\n");
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
    boundary_traversal(t.root);
    t.print_inOrder(t.root);
    return 0;
}