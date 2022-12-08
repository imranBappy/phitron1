#include "bst.h"
#include <bits/stdc++.h>
using namespace std;

Node *invert_tree(Node *root);
void print_preeOrder(Node *root);

Node *invert_tree(Node *root)
{
    if (root == NULL)
        return root;
    invert_tree(root->left);
    swap(root->left, root->right);
    if (root->left)
        if (root->left->left || root->left->right)
            invert_tree(root->left);
    return root;
}

void print_preeOrder(Node *root)
{
    if (root == NULL)
        return;
    printf("%d -> ", root->data);
    print_preeOrder(root->left);
    print_preeOrder(root->right);
}
int main()
{
    BST t;

    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        t.insert(t.root, temp);
    }
    t.print_inOrder(t.root);
    cout << endl;
    print_preeOrder(t.root);

    invert_tree(t.root);
    cout << endl;

    print_preeOrder(t.root);

    return 0;
}