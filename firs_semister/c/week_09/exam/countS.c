#include <stdio.h>
/*
    then i will devlop a vs code extention
    then i write a quick idea
    searching algorithm like dicktionary
    random swaps algorithm
*/
int min(int *arr, int i, int len);
int count_swaps(int *arr, int len);
void swap(int *num1, int *num2);
void display(int arr[], int len)
{
    printf("\n");
    printf("\t*** Print Array ***\n\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {2, 3, 0, 4, 5, 9, 6, 7, 1, 8};
    int len = sizeof(arr) / 4;
    count_swaps(arr, len);
    display(arr, len);
    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int min(int *arr, int i, int len)
{
    int min = i;
    for (; i < len; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return min;
}

int count_swaps(int *arr, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int minNum = min(&arr[0], i, len);
        swap(&arr[i], &arr[minNum]);
        count++;
    }
    printf("count : %d \n ", count);
}