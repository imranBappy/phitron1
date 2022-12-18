#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    vector<pair<int, int>> edge_list;
    int edge;
    cin >> edge;
    for (int i = 0; i < edge * 2; i++)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }
    for (pair<int, int> p : edge_list)
    {
        printf("{%d, %d}\n", p.first, p.second);
    }

    return 0;
}