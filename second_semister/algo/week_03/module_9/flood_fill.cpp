#include <bits/stdc++.h>
using namespace std;

/*

5 8
########
#.A#...#
#.##.#B#
#......#
########
*/

const int N = 100;
int maze[N][N];
pair<int, int> source;
pair<int, int> dst;
int n, m;
/*
# ->  -1
. -> 0

// inside check
// forbidden check
// visited check

dx = diffrance of x

x  =  row
y = col

mid = (x,y)

right = (x,     y+1)
left =  (x,     y-1)
up =    (x+1,   y)
down =  (x-1,   y)

dx  = {0,0,1,-1}
dy  = {1,-1,0,0}

*/
int level[100][100];
int visited[100][100];

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
    if (maze[x][y] == -1)
        return false;
    return true;
}

void bfs()
{
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    queue<pair<int, int>> q;
    q.push(source);
    visited[source.first][source.second] = 1;
    level[source.first][source.second] = 0;
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
                level[new_x][new_y] = level[x][y] + 1;
            }
        }
    }
}
void print_maze()
{
    int step = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == source.first && j == source.second)
                cout << "A";
            else if (i == dst.first && j == dst.second)
                cout << "B";
            else if (visited[i][j])
                cout << "-";
            else if (maze[i][j] == -1)
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }
}

void input_maze()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                maze[i][j] = -1;
            else if (s[j] == 'A')
                source = {i, j};
            else if (s[j] == 'B')
                dst = {i, j};
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    input_maze();
    print_maze();
    bfs();

    if (visited[dst.first][dst.second])
        cout << "\nYES : " << level[dst.first][dst.second] << endl;
    else
        cout << "NO" << endl;

    print_maze();
    return 0;
}