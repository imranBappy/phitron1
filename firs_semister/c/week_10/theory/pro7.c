#include <stdio.h>

/*
5
2 3 1 5 4
15

*/

int main()
{
    int n = 5;
    int arr[] = {2, 3, 1, 5, 4};
    int mul;
    scanf("%d", &mul);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr[i] * arr[j]) == mul && i != j)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}