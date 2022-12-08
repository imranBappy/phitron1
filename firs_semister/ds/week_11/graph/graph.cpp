#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWrightsPair;

class Graph
{
    int v;
    list<edgeWrightsPair> *adj;

public:
    Graph(int v)
    {
        this->v = v;
        adj = new list<edgeWrightsPair>[v];
    }
    void addEdge(int u, int v, int w)
    {
        adj[u].push_front(make_pair(v, w));
        adj[v].push_front(make_pair(u, w));
    }
    void print_adj(int j)
    {
        list<edgeWrightsPair> l = adj[j];
        for (auto i = l.begin(); i != l.end(); i++)
        {
            printf("(%d, %d) --> ", i->first, (*i).second);
        }
        printf("\n");
    }
    void DFS(int source)
    {
        static vector<bool> visited(this->v, false);
        visited[source] = true;
        printf("%d-> ", source);

        for (auto element : adj[source])
        {
            int v = element.first;
            if (visited[v] != true)
            {
                DFS(v);
            }
        }
    }
    int BST(int source)
    {
        int visited[this->v + 1];
        memset(visited, 0, sizeof(visited));
        queue<int> q;
        q.push(source);
        printf("\n");
        visited[source] = 1;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            printf("%d -> ", curr);
            for (auto element : adj[curr])
            {
                int v = element.first;
                if (visited[v] == 0)
                {
                    visited[v] = 1;
                    q.push(v);
                }
            }
        }
        printf("\n");

        return 0;
    }
};

int main()
{
    int v, e;
    cin >> v >> e;
    Graph g(v);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }
    for (int i = 0; i < v; i++)
    {
        g.print_adj(i);
    }

    // g.BST(6);
    g.DFS(0);
    return 0;
}
