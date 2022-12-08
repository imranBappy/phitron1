#include <bits/stdc++.h>
using namespace std;

void inputMatrix(int matrix[100][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
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
        for (int j = 0; j < row; j++)
        {
            if (i != j && matrixA[i][j] != 0)
            {
                cout << "It not is diagonal" << endl;
                return 0;
            }
        }
    }
    cout << "It is diagonal" << endl;

    for (int j = 0; j < row; j++)
    {
        if (matrixA[j][j] != matrixA[0][0])
        {
            cout << "It not is scaler matrix" << endl;
            return 0;
        }
    }
    cout << "It is scaler matrix" << endl;

    for (int j = 0; j < row; j++)
    {
        if (matrixA[j][j] != 1)
        {
            cout << "It not is identity matrix" << endl;
            return 0;
        }
    }
    cout << "It is identity matrix" << endl;

    // cout << "Sum of diagonal : " << sum << endl;

    return 0;
}