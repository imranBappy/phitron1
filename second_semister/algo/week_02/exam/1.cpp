#include <bits/stdc++.h>

using namespace std;
bool visited[100];
void input(vector<int> arr[]);
bool is_directional(vector<int> adjacency_list[], int nodes, int source);

int main()
{
    freopen("input.txt", "r", stdin);
    int nodes;
    cin >> nodes;
    nodes++;
    vector<int> adjacency_list[nodes];
    memset(visited, false, 100);
    input(adjacency_list);
    if (is_directional(adjacency_list, nodes, 1))
        printf("bi-directionoal \n");
    else
        printf("directed  \n");
}

void input(vector<int> adjacency_list[])
{
    int edge;
    cin >> edge;
    while (edge--)
    {
        int x, y;
        cin >> x >> y;
        adjacency_list[x].push_back(y);
        // adjacency_list[y].push_back(x);
    }
}

bool is_edge_Directional(vector<int> v, int node)
{
    for (int val : v)
        if (val == node)
            return true;
    return false;
}

bool is_directional(vector<int> adjacency_list[], int nodes, int source)
{
    bool visited[nodes + 1];
    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        if (adjacency_list[head].empty())
            return false;
        for (int val : adjacency_list[head])
        {
            if (!is_edge_Directional(adjacency_list[val], head))
                return false;
            if (visited[val])
                continue;
            visited[val] = true;
            q.push(val);
        }
    }
    puts("");
    return true;
}
