#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[100005];
bool visited[100005];
int color[100005];
bool DFS(int source)
{
    visited[source] = true;
    // cout << source << " ";
    for (int val : adj[source])
    {
        if (!visited[val])
        {
            if (color[source] == 1)
                color[val] = 2;
            else
                color[val] = 1;
            if (!DFS(val))
                return false;
        }
        else
        {
            if (color[source] == color[val])
                return false;
        }
    }
    return true;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            color[i] = 1;
            if (!DFS(i))
                cout << "IMPOSSIBLE" << endl;
        }
    for (int i = 1; i <= n; i++)
    {
        cout << color[i] << " ";
    }

    return 0;
}