#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1000000];
vector<int> color;

int visited[10000000];
int color_select(int c)
{
    if (color[c])
        return 0;
    return 1;
}
void DFS(int source)
{
    cout << source << " ";
    visited[source] = true;
    for (int val : adj[source])
        if (!visited[val])
            DFS(val);
}
stack<int> s;

void DFS2(int source)
{
    int selected_color = -1;

    cout << source << " ";
    s.pop();

    for (int val : adj[source])
    {
        if (visited[val])
        {
            selected_color = color_select(val);
            break;
        }
    }
    // printf("\nSource : %d, Color : %d \n", source, selected_color);
    for (int val : adj[source])
    {
        if (visited[val] && color[val] == selected_color)
        {
            // printf("\nNot Color Abele\n");
            // printf("\nSource : %d, Color : %d \n", source, selected_color);
            // return;
        }
    }

    if (selected_color == -1)
        color[source] = 0;
    else
        color[source] = selected_color;

    for (int val : adj[source])
    {
        if (!visited[val])
        {
            visited[val] = true;
            s.push(val);
        }
    }
    if (s.empty())
        return;
    DFS2(s.top());
}



int main()
{
    freopen("input.txt", "r", stdin);
    color.resize(10000000, -1);
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d -> ", i);
        for (auto val : adj[i])
        {
            cout << val << ", ";
        }
        cout << endl;
    }

    cout << "\nDFS : ";
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            int source = i;
            s.push(source);
            visited[source] = true;
            DFS2(source);
            count++;
        }
    }

    cout << "\nWhile -> ";
    for (int i = 0; i < n; i++)
        if (color[i] == 1)
            cout << i << " ";
    cout << "\nBlack -> ";
    for (int i = 0; i < n; i++)
        if (color[i] == 0)
            cout << i << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
        if (color[i] == 1)
            cout << "2 ";
        else if (color[i] == 0)
            cout << "1 ";
    cout << endl;

    cout << "\nTotal component : " << count << endl;
    return 0;
}