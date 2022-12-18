#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int nodes;
    cin >> nodes;
    vector<int> lists[nodes];
    for (int i = 0; i < nodes * 2; i++)
    {
        int r, c;
        cin >> r >> c;
        lists[r].push_back(c);
    }
    for (int i = 0; i < nodes; i++)
    {
        printf("%d -> : ", i);
        for (int p : lists[i])
        {
            printf("%d, ", p);
        }
        cout << endl;
    }
}