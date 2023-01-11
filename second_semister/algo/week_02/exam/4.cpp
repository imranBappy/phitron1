/*
traversal order : A,E,B,D,C
Level 0: A,E
Level 1: B,D
Level 2: C

*/

// #include <bits/stdc++.h>

// using namespace std;

// void init(vector<int> arr[]);
// void BFS(vector<int> adjacency_list[], int nodes, int source);

// void print_list(vector<int> list[], int n);
// bool visited[1000];

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     int nodes;
//     cin >> nodes;
//     vector<int> adjacency_list[++nodes];
//     init(adjacency_list);
//     memset(visited, false, sizeof(visited));
//     print_list(adjacency_list, nodes);
//     cout << "BFS : ";
//     BFS(adjacency_list, nodes, 0);
// }

// void init(vector<int> adjacency_list[])
// {
//     int edge;
//     cin >> edge;
//     while (edge--)
//     {
//         int x, y;
//         cin >> x >> y;
//         cout << x << " " << y << endl;
//         if (x != -1)
//             adjacency_list[y].push_back(x);
//         if (y != -1)
//             adjacency_list[x].push_back(y);
//     }
// }

// void BFS(vector<int> adjacency_list[], int nodes, int source)
// {
//     queue<int> q;
//     q.push(source);
//     q.push(4);
//     visited[source] = true;
//     visited[4] = true;
//     while (!q.empty())
//     {
//         int head = q.front();
//         q.pop();
//         printf("%d, ", head);
//         for (int val : adjacency_list[head])
//         {
//             if (visited[val])
//                 continue;
//             visited[val] = true;
//             q.push(val);
//         }
//     }
//     puts("");
// }

// void print_list(vector<int> list[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d -> ", i);
//         for (int val : list[i])
//             printf("%d, ", val);
//         puts("");
//     }
//     puts("");
// }
