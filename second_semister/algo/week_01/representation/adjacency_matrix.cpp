#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int nodes;
    cin >> nodes;
    int matrix[nodes][nodes] = {0};
    for (int i = 0; i < nodes*2; i++)
    {
        int r, c;
        cin >> r >> c;
        matrix[r][c] = 1;
    }

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (matrix[i][j] == 1)
                cout << i << " -> " << j << endl;
        }
    }

    return 0;
}