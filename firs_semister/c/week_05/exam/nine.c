#include <stdio.h>
void reverseArr()
{
    int arr[5];
    int *ptr;
    ptr = &arr[0];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    reverseArr();
    return 0;
}