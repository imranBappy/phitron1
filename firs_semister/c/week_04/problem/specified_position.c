#include <stdio.h>
void input_element(int arr[], int len);
void print_element(int arr[], int len);
void insert_element(int arr[], int len);
int main()
{
    int len = 10;
    printf("Enter length of arr : ");
    scanf("%d", &len);
    int arr[len];
    input_element(arr, len);
    print_element(arr, len);
    len++;
    insert_element(arr, len);
    print_element(arr, len);

    return 0;
}

void input_element(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Enter %d number index element : ", i);
        scanf("%d", &arr[i]);
    }
}
void print_element(int arr[], int len)
{
    printf("\n\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d =  %d\n", i, arr[i]);
    }
}
void insert_element(int arr[], int len)
{
    int index;
    int element;
    printf("Enter Position to insert : ");
    scanf("%d", &index);
    printf("Enter Element to insert : ");
    scanf("%d", &element);
    for (int i = 0; i < (len + 1) - index; i++)
    {
        arr[(len + 1) - i] = arr[len - i];
    }
    arr[index] = element;
}
