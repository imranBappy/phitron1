#include <stdio.h>

int max_num(int arr[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count =     0;
    if (n == 1)
    {
        printf("%d\n", count);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = arr[i]; j < max_num(arr, n); j++)
        {
            count++;
            // printf("%d, ", count);
        }
        // printf("\n\tcount = %d", count);
    }
    // printf("\n\tMax num = %d\n\n", max_num(arr, n));
    // printf("count = %d\n", count);
    printf("%d", count);
    return 0;
}
int max_num(int arr[], int n)
{
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}