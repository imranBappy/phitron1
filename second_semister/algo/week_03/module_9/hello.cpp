#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int adj[1000][1000];
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

public:
    int N, n, m;
    int visited[1000][1000];
    vector<pair<int, int>> nodes;
    vector<int> visited_node;
    void input();
    void BFS(pair<int, int> source);
    void print();
    bool is_inside(pair<int, int> coord)
    {
        int x = coord.first;
        int y = coord.second;
        if (x > 0 && x < n && y > 0 && y < m)
            return true;
        return false;
    }
    bool is_safe(pair<int, int> coord)
    {
        int x = coord.first;
        int y = coord.second;
        if (adj[x][y] == -1)
            return false;
        return true;
    }
};

void Graph::input()
{
    cout << "HELLO" << endl;
    int node = 0;
    cin >> this->n >> this->m;
    return;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                this->adj[i][j] = -1;
            // else
            // {
            //     visited_node.push_back(node++);
            //     nodes.push_back({i, j});
            // }
        }
    }
}
void Graph::print()
{
    printf("Print : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[i][j];
            // if (visited[i][j])
            //     cout << "-";
            // else if (adj[i][j] == -1)
            //     cout << "#";
            // else
            //     cout << ".";
        }
        cout << endl;
    }
}
void Graph::BFS(pair<int, int> source)
{
    queue<pair<int, int>> q;
    q.push(source);
    visited[source.first][source.second] = 1;
    while (!q.empty())
    {
        pair<int, int> new_source = q.front();
        q.pop();
        int x = new_source.first;
        int y = new_source.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = new_source.first + dx[i];
            int new_y = new_source.second + dy[i];
            if (is_inside({new_x, new_y}) && is_safe({new_x, new_y}) && visited[new_x][new_y] == 0)
            {
                visited[new_x][new_y] = 1;
                q.push({new_x, new_y});
            }
        }
    }
}

int main()
{

    cout << "Hello World!" << endl;

    Graph g;

    return 0;
}