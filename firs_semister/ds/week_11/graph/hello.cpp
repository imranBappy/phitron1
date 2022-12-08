#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

void check_double(LinkedList *l)
{
    Node *node = l->head;    // G
    Node *next = node->next; // G
    int index = 1;           // 1
    while (next)
    {
        if (node->data == next->data)
        {
            l->remove(index);
            l->remove(index);
            // if (l->length == 2)
            // {
            //     l->print_list();
            //     printf("new head : %c \n", l->head->data);
            //     printf("new head next : %c \n", l->head->next->data);
            // }

            if (l->head == NULL)
            {
                return;
            }
            node = l->head;
            next = l->head->next;
            index = 1;
            continue;
        }
        node = next;
        next = next->next;
        index++;
    }
}

char color_checker(char c1, char c2)
{
    if (c1 == 'R' && c2 == 'B')
    {
        return 'P';
    }
    else if (c1 == 'R' && c2 == 'G')
    {
        return 'Y';
    }
    else if (c1 == 'B' && c2 == 'G')
    {
        return 'C';
    }
    else if ((c1 == 'B') || (c1 == 'G') || (c1 == 'R'))
    {
        return c1;
    }
    else
    {
        return '\0';
    }
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        LinkedList *l = new LinkedList();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            l->push((int)c);
        }
        l->print_list();

        check_double(l);
        l->print_list();

        Node *node = l->head;
        if (node == NULL)
        {
            cout << "Error";
            continue;
        }

        char prev = '\0';
        char now = '\0';
        while (node)
        {
            if (node->next)
            {
                now = color_checker((char)node->data, (char)node->next->data);
                if (prev != now)
                {
                    printf("%c", now);
                }
                prev = now;
                node = node->next;
            }
            else
            {
                if (prev != (char)node->data)
                {
                    printf("%c", (char)node->data);
                }
            }
            node = node->next;
        }
        printf("\n");
    }

    return 0;
}