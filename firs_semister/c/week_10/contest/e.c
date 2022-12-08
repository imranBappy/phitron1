#include <stdio.h>
void sort(int *A, int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}
int main()
{
    int n, i;
    int len;
    scanf("%d", &n);
    int minGup;
    int gup;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &len);
        int arr[len];
        for (int j = 0; j < len; j++)
        {
            scanf("%d ", &arr[j]);
        }
        sort(arr, len);
        minGup = arr[1] - arr[0];
        // printf("minGup = %d\n", minGup);
        // for (int j = 0; j < len; j++)
        // {
        //     printf("%d ", arr[j]);
        // }
        for (int j = 1; j < len - 1; j++)
        {
            gup = arr[j + 1] - arr[j];
            if (minGup > gup)
            {
                minGup = gup;
            }
        }
        printf("%d\n", minGup);
    }

    return 0;
}