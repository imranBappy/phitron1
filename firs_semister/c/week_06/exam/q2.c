#include <stdio.h>

int main()
{

    int f(int n, int a[])
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                cnt++;
        }
        return cnt;
    }
    int arr[] = {1, 2, 1, 2, 1};
    printf("%d", f(5, arr));
    return 0;
}