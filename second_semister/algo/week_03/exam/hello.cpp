/*
Author: Imran Hossen
Date: 10/2/23
*/

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
        this->adj[u].push_back(v);

        // this->adj[v].push_back(u);
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
int visited[100];

bool is_cycle(int source, Graph *s)
{
    memset(visited, 0, sizeof(visited));
    cout << "source : " << source << "\nOutput : ";
    vector<int> q;
    q.push_back(source);
    for (int i = 0; q.size() != i; i++)
    {
        int font = q[i];
        cout << font << " ";

        for (int val : s->adj[font])
        {
            if (visited[val] == 0)
                q.push_back(val);
            else if (visited[val] == 2)
            {
                cout << endl
                     << "Exists Node : " << val << endl;
                return true;
                cout << endl;
            }
        }
        visited[font] = 2;
    }
    for (int i : q)
    {
        visited[i] = 1;
    }
    cout << endl;

    return false;
}

int main()
{
    freopen("input.txt", "r", stdin); // input from input.txt file
    int n;
    cin >> n;
    Graph *g = new Graph(n);
    g->input();
    g->print();
    g->BFS(1);

    // cout << "DFS : ";
    // g->DFS(1);

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            if (is_cycle(i, g))
            {
                cout << "\nCycle Exists!\n";
                cout << "Visited : \n";
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " " << visited[i] << endl;
                }
                return 0;
            }
            else
            {
                cout << "Visited : \n";
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " " << visited[i] << endl;
                }
            }

            cout << endl;
        }
    }
    cout << "No cycle!\n";

    cout << "Visited : \n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << visited[i] << endl;
    }

    return 0;
}