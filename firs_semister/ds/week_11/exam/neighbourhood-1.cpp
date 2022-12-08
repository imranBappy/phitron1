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
        int visited[this->v];
        memset(visited, 0, sizeof(visited));
        queue<int> q;
        q.push(h);
        int count = 0;
        visited[h] = 1;

        while (!q.empty())
        {
            int i = q.front();
            q.pop();

            list<int> l = adj[i];
            for (auto i = l.begin(); i != l.end(); i++)
            {
                if (visited[*i] == 0)
                {
                    q.push(*i);
                    count++;
                    visited[*i] = 1;
                }
            }
        }
        return count;
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
    // cout << endl;
    cout << g.find_root(house);

    return 0;
}