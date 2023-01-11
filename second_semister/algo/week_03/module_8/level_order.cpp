#include <bits/stdc++.h>
using namespace std;
/*
:: scope oparator
*/
class Graph
{
    int V;
    vector<list<int>> adj;
    vector<int> level;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
    int getLevel(int node);
    void printGraph(void);
};

Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V, false);
    level.resize(V, 0);
    level[s] = 0;
    queue<int> queue;
    visited[s] = true;
    queue.push(s);
    while (!queue.empty())
    {
        s = queue.front();
        queue.pop();
        printf("%d ", s);

        for (auto val : adj[s])
            if (!visited[val])
            {
                queue.push(val);
                visited[val] = true;
                level[val] = level[s] + 1;
            }
    }
}
int Graph::getLevel(int node)
{
    return level[node];
}
void Graph::printGraph(void)
{
    for (int i = 0; i < adj.size(); i++)
    {
        printf("%d -> ", i);
        for (auto val : adj[i])
        {
            cout << val << " ";
        }
        puts("");
    }
    puts("");
}
int main()
{
    freopen("input.txt", "r", stdin);
    int nodes, edges;
    cin >> nodes >> edges;
    Graph g(nodes);

    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y);
        g.addEdge(y, x);
    }

    g.printGraph();
    g.BFS(0);

    // int level = 4;
    // cout << "\nLevel of " << level << " : " << g.getLevel(level) << endl;

    return 0;
}