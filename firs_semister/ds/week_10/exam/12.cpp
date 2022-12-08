#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

/*
a)      head->nex->next->value : 28
b)      last->prev->next->value : 53
c)      emp->prev->prev->prev : null
d)      temp->next->prev->prev->value : 16
e)      ast->prev->prev->next->value : 25

*/
int main()
{

    int n, value;
    cin >> n;

    LinkedList l;
    while (n--)
    {
        cin >> value;
        l.push(value);
    }

    l.print_list();
    Node *head = l.head;
    Node *last = l.tail;
    Node *temp = head->next->next;

    printf("\na)\thead->nex->next->value : %d\n", head->next->next->data);
    printf("b)\tlast->prev->next->value : %d\n", last->prev->next->data);

    printf("c)\temp->prev->prev->prev : null\n");
    printf("d)\ttemp->next->prev->prev->value : %d\n", temp->next->prev->prev->data);

    printf("e)\tast->prev->prev->next->value : %d\n", last->prev->prev->next->data);

    //  g++ hello.cpp -o out && ./out < input.txt
    return 0;
}