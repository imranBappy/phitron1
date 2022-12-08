#include <stdio.h>

int sum(int *arr, int n);

int main()
{
    int n;
    printf("Enter number of array element : ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number element : ", i);
        scanf("%d", &nums[i]);
    }

    int nums_of_sum = sum(nums, n);
    printf("Sum of the array elements : %d", nums_of_sum);
    return 0;
}
int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}