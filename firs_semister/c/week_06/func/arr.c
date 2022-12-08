#include <stdio.h>
#include <stdlib.h>
int *doubleNum(int n)
{
    int *square = (int *)malloc(n * 4);
    // int square[n];

    for (int i = 1; i <= n; i++)
    {
        square[i - 1] = i * i;
    }
    return square;
}

int main()
{

    int n = 5;
    int *arr;
    arr = doubleNum(n);
    // doubleNum(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}