#include <stdio.h>
/*
4
3

a = 4 * 1   -> 4
b = 4 + 3   -> 7
result = 4

a = 4 * 2   -> 8
b = 4 + 3   -> 7
result = 7

a = 4 * 3   -> 12
b = 7 + 3   -> 10
result = 10
______________________

10
10
a = 1 * 2   -> 2
b = 1 + 10   -> 11
result = 2

a = 2 * 2  -> 4
b = 2 + 10   -> 12
result = 4

a = 4 * 2   -> 8
b = 4 + 10   -> 14
result = 8


a = 8 * 2    -> 16
b = 8 + 10   -> 18
result = 16


a = 16 * 2    -> 32
b = 16 + 10   -> 26
result = 26


*/
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int min = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        int a = min * 2;
        int b = min + k;
        if (a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }
    printf("%d\n", min);
    return 0;
}