#include <stdio.h>
int linier_search(int arr[], int len, int target);
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 5, 9, 10};
    int result = linier_search(arr, 10, 1);
    printf("\n\tElement found a index : %d\n", result);
    return 0;
}
int linier_search(int arr[], int len, int target)
{
    for (int i = 0; i < len; i++)
        if (arr[i] == target)
            return i;
    return -1;
}