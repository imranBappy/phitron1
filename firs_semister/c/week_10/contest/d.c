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
    int n, limit;
    scanf("%d %d ", &n, &limit);
    int min = 0;
    int index = 0;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        // printf("num %d \n", num);
        if (min > num)
        {
            arr[index] = num;
            index++;
        }
    }
    sort(arr, index);
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] < 1)
        {
            sum += arr[i] * (-1);
        }
    }
    printf("%d\n", sum);
    return 0;
}