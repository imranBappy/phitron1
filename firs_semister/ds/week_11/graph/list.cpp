#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Node;

void print_list(list<int> l)
{
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    printf("\n");
}

int main()
{

    list<int> l;
    l.push_back(40);
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    print_list(l);

    // cout << "\nl.front() : " << l.front(); // returns the first data in the list
    // cout << "\nl.back() : " << l.back(); // returns the last data in the list

    // l.pop_front(); remove data form front in list
    // l.pop_back(); // remove data form back in list

    // l.reverse(); // reverses the list

    // l.sort(); sorts the list

    // l.clear(); clears all data in the list

    // cout << l.size() << endl; // returns the size of the list

    // cout << l.empty() << endl; // returns bool. if list is empty then  returns true or false

    print_list(l);

    return 0;
}