#include <stdio.h>
#include <stdlib.h>
int findProduct(int arr[], int n)
{
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    return product;
}
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int result = findProduct(arr, 8);
    // printf("result  = %d\n", result);
    int n = 3;
    int *arr = (int *)malloc(n);
    printf("size = %d\n", n * sizeof(*arr));
    return 0;
}