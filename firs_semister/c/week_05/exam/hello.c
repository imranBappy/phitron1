#include <stdio.h>
void check(int n, int arr[])
{
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i * i;
    }
}
int main()
{
    int n = 10;
    int res[n];
    check(n, res);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", res[i]);
    }
    return 0;
}