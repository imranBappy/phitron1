#include <stdio.h>
void makeNArray(int n, int squares[]);
int main()
{
    int n = 10;
    int res[n];
    makeNArray(n, res);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", res[i]);
    }
    return 0;
}
void makeNArray(int n, int squares[])
{
    for (int i = 1; i <= n; i++)
    {
        squares[i - 1] = i * i;
    }
}
