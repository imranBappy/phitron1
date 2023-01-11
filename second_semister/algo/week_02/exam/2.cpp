#include <bits/stdc++.h>
using namespace std;

bool visited[100];
void init(vector<int> arr[]);
int BFS(vector<int> adjacency_list[], int nodes, int source);

/*
    This implementing is very easy and space complexity better
*/
int main()
{
    freopen("input.txt", "r", stdin);
    int nodes;
    cin >> nodes;
    vector<int> adjacency_list[nodes + 1];
    memset(visited, false, 100);
    init(adjacency_list);

    cout << "\n"
         << BFS(adjacency_list, nodes, 1) << endl;
}

void init(vector<int> adjacency_list[])
{
    int edge;
    cin >> edge;
    while (edge--)
    {
        int x, y;
        cin >> x >> y;
        // adjacency_list[x].push_back(y);
    }
}

bool isDirectional(vector<int> v, int node)
{
    for (int val : v)
        if (val == node)
            return true;
    return false;
}

int BFS(vector<int> adjacency_list[], int nodes, int source)
{
    int count = 0;
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
        {
            count++;
        }
        for (int val : adjacency_list[head])
        {
            if (false == isDirectional(adjacency_list[val], head))
            {
                count++;
            }
            if (visited[val])
                continue;
            visited[val] = true;
            q.push(val);
        }
    }
    return count;
}
