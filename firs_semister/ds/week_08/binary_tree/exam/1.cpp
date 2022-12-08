#include "Tree.h"
#include <bits/stdc++.h>
using namespace std;
int count_node(Node<int> *root)
{
    static int count = 0;
    if (!root->left)
        return count;
    count_node(root->left);
    count_node(root->right);
    count++;
    return count;
}
bool isSame(Node<int> *root1, Node<int> *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    if (root1 != NULL && root2 != NULL)
    {
        return (
            root1->data == root2->data &&
            isSame(root1->left, root2->left) &&
            isSame(root1->right, root2->right));
    }
    return 0;
}
int main()
{
    Tree<int> *root1 = new Tree<int>(-1);
    Tree<int> *root2 = new Tree<int>(-1);
    root1->input_with_arr();
    root2->input_with_arr();

    cout << isSame(root1->root, root2->root);
    return 0;
}