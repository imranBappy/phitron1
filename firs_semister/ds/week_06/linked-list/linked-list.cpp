#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    LinkedList<int> list;
    list.push_back(2);
    list.push_back(3);
    list.push_back(1);
    Node<int>* x = list.find_node(1);

    list.print();

    printf("length = %d\n", list.length);
    return 0;
}