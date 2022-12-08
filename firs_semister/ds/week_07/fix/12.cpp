#include "linked.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    LinkedList<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }

    l.print();

    int sum = 0;

    Node<int> *temp = l.head;
    

    return 0;
}