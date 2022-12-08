#include <stdio.h>

void display(int arr[], int len);
void inputArr(int *arr, int len);
void removeElement(int *arr, int len, int index);

int findIndex(int *arr, int len, int target);
int main()
{
    int len;
    printf("Enter how may number do want you input : ");
    scanf("%d", &len);
    int arr[len];
    inputArr(arr, len);
    int element;
    display(arr, len);
    printf("Enter which is element do you want to remove : ");
    scanf("%d", &element);
    int index = findIndex(arr, len, element);
    // printf("\nindex : %d\n", index);
    len = len - 1;
    removeElement(arr, len, index);

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
void removeElement(int *arr, int len, int index)
{
    for (int i = index; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int findIndex(int *arr, int len, int target)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}