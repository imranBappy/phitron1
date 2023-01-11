#include <bits/stdc++.h>
using namespace std;

int visited[1000];
int n;
vector<int> adj[1000];

bool DFS(int source)
{
    visited[source] = 1;
    for (int val : adj[source])
        if (visited[val] == 1)
            return false;
        else if (visited[val] == 0)
        {
            if (!DFS(val))
                return false;
        }
    visited[source] = 2;
    return true;
}
bool DFS2(int source)
{
    visited[source] = 1;
    cout << source << " ";
    for (int i = 1; i <= n; i++)
    {
        for (int val : adj[source])
            if (visited[val] == 1)
                return false;
            else
                return DFS2(val);
    }
    return true;
}
void input()
{
    int edge;
    cin >> edge;
    for (int i = 1; i <= edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
}
void print(void)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d -> ", i);
        for (int val : adj[i])
            printf("%d ", val);
        cout << endl;
    }
    cout << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    cin >> n;
    input();
    print();

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] != 2)
        {
            if (!DFS(i))
            {
                cout << "\nCycle" << endl;
                return 0;
            }
        }
    }

    cout << "\nDAG" << endl;

    return 0;
}