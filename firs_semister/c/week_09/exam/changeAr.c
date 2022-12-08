#include <stdio.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void reverse(int *arr, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int *num1 = &arr[i], *num2 = &arr[len - 1 - i];
        swap(num1, num2);
    }
}
void copy_array(int *arr1, int *arr2, int len)
{
    for (int i = 0; i < len; i++)
    {
        arr2[i] = arr1[i];
    }
}
void change_array(int *arr, int len, int *output)
{
    reverse(arr, len);
    copy_array(arr, output, len);
}
int main()
{
    int *output;
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / 4;
    change_array(arr, len, output);

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", output[i]);
    }
    return 0;
}