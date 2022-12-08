#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    LinkedList list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);

    list.print_list();
    list.reverse_list_with_recursive();
    list.print_list();
    list.print_reverse();
    // printf("newHead = %d\n", list.head->data);
    // printf("newHead = %d\n", list.head->next->data);

    return 0;
}