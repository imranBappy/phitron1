#include <bits/stdc++.h>
using namespace std;

int visited[100000];
int n;
vector<int> adj[100005];

stack<int> s;
bool DFS(int source)
{
    visited[source] = 1;
    // printf("%d ", source);
    for (int val : adj[source])
        if (visited[val] == 0)
        {
            if (!DFS(val))
                return false;
        }
        else if (visited[val] == 1)
            return false;

    s.push(source);
    visited[source] = 2;

    return true;
}
void input()
{
    int edge;
    cin >> edge;
    for (int i = 1; i <= edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
}
void print(void)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d -> ", i);
        for (int val : adj[i])
            printf("%d ", val);
        cout << endl;
    }
    cout << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    cin >> n;
    input();
    // print();

    for (int i = 1; i <= n; i++)
        if (visited[i] == 0)
            if (!DFS(i))
            {
                cout << "IMPOSSIBLE\n";
                return 0;
            }

    // cout << "\nTopological Sort : ";
    // cout << s.size() << endl;
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;

    // s.pop();
    // cout << s.top() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
