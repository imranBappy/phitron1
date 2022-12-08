#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int v;
    list<int> *adj;

public:
    Graph(int v)
    {
        this->v = v;
        adj = new list<int>[v];
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void print_adj(int j)
    {
        list<int> l = adj[j];
        printf("\n%d : ", j);

        for (auto i = l.begin(); i != l.end(); i++)
        {
            printf("%d -> ", *i);
        }
    }
    int find_root(int h)
    {
        list<int> l = adj[h];
        return l.size();
    }
};

int main()
{

    int v, e;
    cin >> v >> e;
    Graph g(v);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    int house;
    cin >> house;

    // for (int i = 0; i < v; i++)
    // {
    //     g.print_adj(i);
    // }
    cout << g.find_root(house);

    return 0;
}