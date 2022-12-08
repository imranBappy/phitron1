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
    // cout << "Enter matrix 1" << endl;
    int row, col;
    // cout << "Enter row : ";
    cin >> row;
    // cout << "Enter col : ";
    cin >> col;
    int matrixA[100][100];

    inputMatrix(matrixA, row, col);

    // cout << "Enter matrix 2" << endl;

    int matrixB[100][100];
    inputMatrix(matrixB, row, col);
    // cout << "Matrix 1 : " << endl;
    // printMatrix(matrixA, row, col);

    // cout << "Matrix 2 : " << endl;
    // printMatrix(matrixB, row, col);

    int AB[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            AB[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    cout << "Matrix A and B Adding result : " << endl;
    printMatrix(AB, row, col);
  
    return 0;
}