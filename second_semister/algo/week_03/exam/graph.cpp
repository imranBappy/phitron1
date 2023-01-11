#include <cstring>
#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;
class Graph
{
public:
    vector<int> *adj;
    int *visited;
    int n, e;
    Graph(int n);
    void input();
    void print();
    void BFS(int source);
    void DFS(int source);
};
Graph::Graph(int n)
{
    this->n = n;
    this->adj = new vector<int>[n + 1];
    this->visited = new int[n + 1];
    memset(visited, 0, sizeof(this->visited) + 1);
}
void Graph::input()
{
    cin >> this->e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        this->adj[v].push_back(u);
        this->adj[u].push_back(v);
    }
}
void Graph::print()
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " -> ";
        for (int val : adj[i])
            cout << val << " ";
        cout << endl;
    }
    cout << endl;
}
void Graph::BFS(int source)
{

    queue<int> q;
    this->visited[source] = 1;
    q.push(source);
    cout << "BFS :";
    while (!q.empty())
    {
        int font = q.front();
        q.pop();
        cout << " " << font;
        for (int val : adj[font])
        {
            if (this->visited[val] != 1)
            {
                this->visited[val] = 1;
                q.push(val);
            };
        }
    }
    cout << endl;
}
void Graph::DFS(int source)
{
    cout << source << " ";
    this->visited[source] = 1;
    for (int val : this->adj[source])
    {
        if (visited[val] != 1)
            DFS(val);
    }
}

int main()
{
    freopen("input.txt", "r", stdin); // input from input.txt file
    int n;
    cin >> n;
    Graph g = Graph(n);
    g.input();
    g.print();
    // g.BFS(1);
    
    cout << "DFS : ";
    g.DFS(1);

    return 0;
}