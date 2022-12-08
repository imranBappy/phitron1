#include <stdio.h>

void max_count(int arr[], int len, int result[2]);
int main()
{
    int n;
    printf("Enter How many you want to read ? ");
    scanf("%d", &n);
    int nums[n];
    int result[2] = {0};
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &nums[i]);
    }
    max_count(nums, n, result);
    printf("\nMax num of arr : %d\n", result[0]);
    printf("Maxmun occurs %d times\n", result[1]);
    return 0;
}
void max_count(int arr[], int len, int result[2])
{
    for (int i = 0; i < len; i++)
        if (result[0] < arr[i])
            result[0] = arr[i];
    for (int i = 0; i < len; i++)
        if (result[0] == arr[i])
            result[1]++;
}