#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    vector<list<int>> adj;

public:
    Graph(int v);
    void add_edge(int v, int w);
    void print();
};

Graph::Graph(int v)
{
    adj.resize(v);
}
void Graph::add_edge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::print()
{
    printf("HELLO WORLD");
    for (int i = 0; i < v; i++)
    {
        printf("%d -> ", i);
        for (int val : adj[i])
            printf("%d, ", val);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    Graph g(n);
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        g.add_edge(x, y);
        g.add_edge(y, x);
    }

    g.print();

    return 0;
}