#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int data;
    treeNode *left_child, *right_child;
    treeNode()
    {
        this->data = 0;
        this->left_child = nullptr;
        this->right_child = nullptr;
    }
    treeNode(int data)
    {
        this->data = data;
        this->left_child = nullptr;
        this->right_child = nullptr;
    }
};
class Tree
{
public:
    treeNode *root;
    Tree()
    {
        this->root = NULL;
    }
    treeNode *tree_insert()
    {
        int n;
        cin >> n;
        treeNode **tree_nodes = new treeNode *[n];
        for (int i = 0; i < n; i++)
            tree_nodes[i] = new treeNode(-1);
        for (int i = 0; i < n; i++)
        {
            int data, left_child, right_child;
            cin >> data >> left_child >> right_child;
            tree_nodes[i]->data = data;
            if (left_child != -1)
                tree_nodes[i]->left_child = tree_nodes[left_child];
            if (right_child != -1)
                tree_nodes[i]->right_child = tree_nodes[right_child];
        }
        return tree_nodes[0];
    }
    void print_inOrder(treeNode *root)
    {
        if (root == nullptr)
            return;
        printf("%d -> ", root->data);
        print_inOrder(root->left_child);
        print_inOrder(root->right_child);
    }
};