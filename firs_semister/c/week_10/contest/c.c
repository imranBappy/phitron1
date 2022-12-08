#include <stdio.h>
/*
3 4 5 2 9 1 1

3 1 4 1 5 9 2
imranbappy.me
*/

int main()
{

    int n;
    scanf("%d", &n);
    int arr[300];
    int len;

    for (int k = 0; k < n; k++)
    {
        scanf("%d", &len);
        for (int i = 0; i < len; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < (len + 1) / 2; i++)
        {
            if (len / 2 == i)
            {
                printf("%d", arr[i]);
            }
            else
            {
                printf("%d %d ", arr[i], arr[len - 1 - i]);
            }
        }
        printf("\n");
    }

    return 0;
}