#include <bits/stdc++.h>
using namespace std;
int adj[1000][1000];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int visited[1000][1000];
int n, m;
vector<pair<int, int>> nodes;
vector<int> visited_node;
bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;
    if (x >= 0 && x < n && y >= 0 && y < m)
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

void input()
{
    int node = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                adj[i][j] = -1;
            else
            {
                visited_node.push_back(node++);
                nodes.push_back({i, j});
            }
        }
    }
}
void print(int dot)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j])
                cout << dot;
            else if (adj[i][j] == -1)
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }
}
void BFS(pair<int, int> source)
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
    // freopen("input.txt", "r", stdin);

    input();
    // print(0);
    // cout << endl;

    int count = 0;
    for (int node : visited_node)
    {
        if (!visited[nodes[node].first][nodes[node].second])
        {
            count++;

            BFS(nodes[node]);
            // print(count);
            // cout << endl;
        }
    }

    // cout << "Total room : " << count << endl;
    cout << count << endl;
    return 0;
}