#include "Tree.h"
#include <bits/stdc++.h>
using namespace std;

bool isSame(treeNode *root1, treeNode *root2)
{
}

int main()
{
    Tree *tree = new Tree();
    tree->root = tree->tree_insert();
    tree->print_inOrder(tree->root);

    return 0;
}