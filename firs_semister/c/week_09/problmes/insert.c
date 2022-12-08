#include <stdio.h>

void display(int arr[], int len);
void inputArr(int *arr, int len);
void insert(int *arr, int len);
int main()
{
    int len;
    printf("Enter how may number do want you input : ");
    scanf("%d", &len);
    int arr[len];
    inputArr(arr, len);
    len += 1;
    insert(arr, len);

    display(arr, len);
    return 0;
}
void inputArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
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
void insert(int *arr, int len)
{
    int loc;
    int newEle;
    printf("Enter location : ");
    scanf("%d", &loc);
    printf("Enter new Element : ");
    scanf("%d", &newEle);
    arr[len - 1] = 0;
    for (int i = len - 2; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = newEle;
}