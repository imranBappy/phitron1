#include <bits/stdc++.h>

using namespace std;

void init(vector<char> arr[]);
void BFS(vector<char> adjacency_list[], int nodes, int source);

void print_list(vector<int> list[], int n);
bool visited[1000];

int main()
{
    freopen("input.txt", "r", stdin);
    int nodes;
    cin >> nodes;
    vector<char> adjacency_list[++nodes];
    init(adjacency_list);
    memset(visited, false, sizeof(visited));

    print_list(adjacency_list, nodes);
    int count = 0;
    while (true)
    {
        int flag = 1;
        for (int i = 1; i < nodes; i++)
        {
            if (visited[i] == false)
            {
                BFS(adjacency_list, nodes, i);
                count++;
                flag = 0;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << "Total Graph : " << count << endl;
}

void init(vector<int> adjacency_list[])
{
    int edge;
    cin >> edge;
    while (edge--)
    {
        int x, y;
        cin >> x >> y;
        cout << x << " " << y << endl;
        if (x != -1)
            adjacency_list[y].push_back(x);
        if (y != -1)
            adjacency_list[x].push_back(y);
    }
}

void BFS(vector<int> adjacency_list[], int nodes, int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int val : adjacency_list[head])
        {
            if (visited[val])
                continue;
            visited[val] = true;
            q.push(val);
        }
    }
}

void print_list(vector<char> list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d -> ", i);
        for (int val : list[i])
            printf("%c, ", val);
        puts("");
    }
    puts("");
}
