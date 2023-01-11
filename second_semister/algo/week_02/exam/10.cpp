// #include <bits/stdc++.h>
// using namespace std;
// bool visited[10000];
// vector<int> DFS_iterative(vector<int> graph[], int source)
// {
//     stack<int> stack;
//     vector<int> visited;
//     stack.push(source);
//     while (!stack.empty())
//     {
//         int current_node = stack.top();
//         stack.pop();
//         if (find(visited.begin(), visited.end(), current_node) == visited.end())
//         {
//             visited.push_back(current_node);
//             for (int neighbor : graph[current_node])
//             {
//                 stack.push(neighbor);
//             }
//         }
//     }

//     return visited;
// }
// void DFS_using_stack(vector<int> graph[], int nodes, int source)
// {
//     stack<int> s;
//     s.push(source);
//     visited[source] = true;
//     while (!s.empty())
//     {
//         int current_node = s.top();
//         s.pop();
//         cout << current_node << " ";
//         for (int val : graph[current_node])
//             if (!visited[val])
//             {
//                 s.push(val);
//                 visited[current_node] = true;
//             }
//     }
// }
// void print_list(vector<int> list[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d -> ", i);
//         for (int val : list[i])
//         {
//             printf("%d, ", val);
//         }
//         puts("");
//     }
//     puts("");
// }

// void init(vector<int> adjacency_list[])
// {
//     int edge;
//     cin >> edge;
//     while (edge--)
//     {
//         int x, y;
//         cin >> x >> y;
//         adjacency_list[x].push_back(y);
//         adjacency_list[y].push_back(x);
//     }
// }

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     int nodes;
//     cin >> nodes;
//     nodes++;
//     vector<int> adjacency_list[nodes];
//     memset(visited, false, 100);
//     init(adjacency_list);
//     print_list(adjacency_list, nodes);
//     DFS_using_stack(adjacency_list, nodes, 1);
//     cout << endl;
//     DFS_iterative(adjacency_list, 1);

//     return 0;
// }

/*
We can use stack data structure.

same output for 2 technic
DFS: 1, 5, 0, 2, 3, 4
DFS: 1, 5, 0, 2, 3, 4
*/