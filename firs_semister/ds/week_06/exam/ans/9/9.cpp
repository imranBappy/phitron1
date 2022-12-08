#include "linkedList.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    LinkedList<int> **all_list;
    int size;
    cin >> size;
    all_list = new LinkedList<int> *[size];
    LinkedList<int> info;
    int len_all_list = 0;
    for (int i = 1; i <= size; i++)
    {
        int left, right;
        cin >> left >> right;
        int data = info.find_data(i);
        if (len_all_list == 0 || data == -1)
        {
            all_list[len_all_list] = new LinkedList<int>();
            if (left != 0)
            {
                all_list[len_all_list]->push_back(left);
                info.push_back(left);
            }
            all_list[len_all_list]->push_back(i);
            info.push_back(i);

            if (right != 0)
            {
                all_list[len_all_list]->push_back(right);
                info.push_back(right);
            }
            len_all_list++;
            // continue;
        }
        else
        {
            if (left != 0)
            {
                info.push_back(left);
            }
            info.push_back(i);
            if (right != 0)
            {
                info.push_back(right);
            }
            int pos;
            LinkedList<int> *list;
            for (int j = 0; j < len_all_list; j++)
            {
                list = all_list[j];
                pos = list->search(i);
                if (pos != -1)
                {
                    break;
                }
            }
            int checkPos;
            if (right != 0)
            {
                checkPos = list->search_by_position(pos + 1);
                if (checkPos != right)
                {
                    list->insert_by_postion(right, pos + 1);
                }
            }
            if (left != 0)
            {
                checkPos = list->search_by_position(pos - 1);
                if (checkPos != left)
                {
                    list->insert_by_postion(left, pos);
                }
            }
        }
        for (int k = 0; k < len_all_list; k++)
        {
            LinkedList<int> *list = all_list[k];
        }
    }

    LinkedList<int> main_list;
    main_list.head = all_list[len_all_list - 1]->head;
    main_list.length = all_list[len_all_list - 1]->length;
    main_list.tail = all_list[len_all_list - 1]->tail;
    for (int i = 2; i <= len_all_list; i++)
    {
        main_list.marge_list(all_list[len_all_list - i]->head);
    }

    for (int i = 1; i <= size; i++)
    {
        Node<int> *l = main_list.search_by_position_return_node(i);
        Node<int> *r = main_list.search_by_position_return_node(i);
        if (l && l->prev)
        {
            cout << l->prev->data << " ";
        }
        else
        {
            cout << "0 ";
        }
        if (r && r->next)
        {
            cout << r->next->data << " ";
        }
        else
        {
            cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}