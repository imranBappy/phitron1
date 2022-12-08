#include <bits/stdc++.h>
using namespace std;

void inputMatrix(int matrix[100][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        // cout << "Row " << i + 1 << "\n";
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[100][100], int row, int col)
{
    cout << "Output : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << ", ";
        }
        cout << "\n";
    }
}
int main()
{
    int row, col, sum = 0, matrixA[100][100];
    cin >> row;
    cin >> col;
    inputMatrix(matrixA, row, col);

    for (int i = 0; i < row; i++)
    {
        sum += matrixA[i][i];
    }
    cout << "Sum of diagonal : " << sum << endl;

    return 0;
}