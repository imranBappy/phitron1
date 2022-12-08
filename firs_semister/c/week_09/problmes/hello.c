#include <stdio.h>
void inputArr(int *arr, int len)
{
    int i = 0;
    while (i < len)
    {
        scanf("%d", &arr[i]);
        i++;
    }
}
void display(int arr[], int len)
{
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int len = 0;
    scanf("%d", &len);
    int arr[len];
    inputArr(arr, len);
    display(arr, len);
    return 0;
}