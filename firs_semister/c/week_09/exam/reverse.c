#include <stdio.h>

void printArr(int *arr, int len);
void reverse1(int *arr, int len);
void reverse2(int *arr, int len);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Unsorted\n");
    printArr(arr, 5);
    printf("After Sort\n");
    reverse1(arr, 5);
    reverse2(arr, 51);

    printArr(arr, 5);
    return 0;
}
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void printArr(int *arr, int len)
{
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\n");
}
void reverse1(int *arr, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int *num1 = &arr[i], *num2 = &arr[len - 1 - i];
        swap(num1, num2);
    }
}

void reverse2(int *arr, int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        int *num1 = &arr[i], *num2 = &arr[len - 1 - i];
        swap(num1, num2);
        i++;
        j--;
    }
}