#include "Tree.h"
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int makeSum(Node<int> *root, int binary[1000], int n, static int sum)
{
    binary[n] = root->data;
    n++;
    if (root->left == NULL)
    {
        // sum += to_binary(binary, n);
        // for (int i = 0; i < n; i++)
        //     cout << binary[i] << ", ";
        // cout << endl;
        return sum;
    }
    makeSum(root->left, binary, n, sum);
    makeSum(root->right, binary, n, sum);
    return sum;
}
int main()
{
    Tree<int> *tree = new Tree<int>(-1);
    int n;
    cin >> n;
    int pre[n], inOrder[n];
    for (int i = 0; i < n; i++)
        cin >> pre[i];
    for (int i = 0; i < n; i++)
        cin >> inOrder[i];
    Node<int> *root = tree->input_by_scan1(pre, inOrder, 0, n - 1);
    tree->root = root;
    tree->print_tree_my(tree->root, 0);
    // cout << endl;
    // tree->print_boundary(tree->root);
    // tree->level_order();
    // cout << endl;
    cout << endl;

   
    return 0;
}