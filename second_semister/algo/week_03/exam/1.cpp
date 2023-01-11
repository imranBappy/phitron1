#include <iostream>
#include <list>
#include <vector>
using namespace std;
class Graph
{
public:
    vector<int> *adj;
    void addEdge(int u, int v);
    void input(void);
    void BFS(int source);
    void DFS(int source);
};


int main()
{
    freopen("input.txt", "r", stdin); // input from input.txt file

    return 0;
}