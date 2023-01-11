#include <bits/stdc++.h>

using namespace std;

bool visited[100];
void init(vector<int> arr[]);
void BFS(vector<int> adjacency_list[], int nodes, int source);
bool BFS2(vector<int> adjacency_list[], int nodes, int source);

void print_list(vector<int> list[], int n);
void DFS(vector<int> adjacency_list[], int source);
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
    print_list(adjacency_list, nodes);

    cout << "BFS : ";
    if (BFS2(adjacency_list, nodes, 1))
    {
        printf("True\n");
    }
    else
    {
        printf("False \n");
    }

    cout << "DFS : ";
    DFS(adjacency_list, 1);
}

void init(vector<int> adjacency_list[])
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
// isDirectional(adjacency_list[source], source);

bool isDirectional(vector<int> v, int node)
{
    for (int val : v)
        if (val == node)
            return true;
    return false;
}

bool BFS2(vector<int> adjacency_list[], int nodes, int source)
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
        printf("%d, ", head);
        if (adjacency_list[head].empty())
            return 0;
        for (int val : adjacency_list[head])
        {
            if (!isDirectional(adjacency_list[head], val))
            {
                return false;
            }
            if (visited[val])
                continue;
            visited[val] = true;
            q.push(val);
        }
    }
    puts("");
    return true;
}

void BFS(vector<int> adjacency_list[], int nodes, int source)
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
        printf("%d, ", head);
        for (int val : adjacency_list[head])
        {
            if (visited[val])
                continue;
            visited[val] = true;
            q.push(val);
        }
    }
    puts("");
}

void print_list(vector<int> list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d -> ", i);
        for (int val : list[i])
        {
            printf("%d, ", val);
        }
        puts("");
    }
    puts("");
}

void DFS(vector<int> adjacency_list[], int source)
{
    printf("%d, ", source);
    visited[source] = true;
    for (int val : adjacency_list[source])
        if (!visited[val])
            DFS(adjacency_list, val);
}
