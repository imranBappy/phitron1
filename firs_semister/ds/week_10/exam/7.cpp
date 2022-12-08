#include "myStl.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value;
    cin >> n;
    BST t;
    while (n--)
    {
        cin >> value;
        insert(t.root, value);
    }
    level_order(t.root);
    cout << endl;

    t.deleteNode(t.root, 12);
    cout << endl;
    cout << endl;

    level_order(t.root);
    cout << endl;
    cout << endl;

    insert(t.root, 11);

    level_order(t.root);
    cout << endl;
    cout << endl;

    t.deleteNode(t.root, 6);

    // t.print_inOrder(t.root);
    level_order(t.root);
    return 0;
}