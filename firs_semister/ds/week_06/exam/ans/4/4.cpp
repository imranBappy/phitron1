#include <bits/stdc++.h>
using namespace std;
int search(int *arr, int *p)
{
    int *element = arr;
    while (element != p)
    {
        if (*element == *p)
            return 1;
        element++;
    }
    return 0;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result = search(matrix[0], &matrix[i][j]);
            if (result == 1)
                cout << "-1 ";
            else
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}