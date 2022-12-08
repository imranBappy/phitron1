
#include "Tree.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{

    Tree<int> *t = new Tree<int>(-1);
    int n;
    cin >> n;
    int preOrder[n], inOrder[n];
    for (int i = 0; i < n; i++)
        cin >> preOrder[i];
    for (int i = 0; i < n; i++)
        cin >> inOrder[i];
    t->root = t->input_by_scan1(preOrder, inOrder, 0, n - 1);
    t->preOrder(t->root);
    t->level_order();
    return 0;
}