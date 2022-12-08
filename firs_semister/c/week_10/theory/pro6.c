#include <stdio.h>

void change_values(int *ar, int N, int L, int R)
{

    while (L <= R)
    {
        ar[L] = 0;
        L++;
    }
}

int main()
{
    int ar[] = {10, 20, 30, 40, 50}, N = 5, L = 1, R = 3;
    change_values(ar, N, L, R);
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", ar[i]);
    }
    return 0;
}