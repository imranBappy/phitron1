#include <stdio.h>
int linier_search(int arr[], int len, int target);
int removeItem(int arr[], int len, int item);
void print_element(int arr[], int len);
void input_element(int arr[], int len);
void countItem(int arr[], int len);
int main()
{
    int len;
    int action_item = 0;
    printf("Enter len of arr : ");
    scanf("%d", &len);
    int arr[len];
    input_element(arr, len);
    // print_element(arr, len);
    // printf("Enter item for remove : ");
    // scanf("%d", &action_item);
    // len = removeItem(arr, len, action_item);
    countItem(arr, len);

    return 0;
}
int linier_search(int arr[], int len, int target)
{
    for (int i = 0; i < len; i++)
        if (arr[i] == target)
            return i;
    return -1;
}
int removeItem(int arr[], int len, int item)
{
    int itemIndex = linier_search(arr, len, item);
    if (-1 == itemIndex)
        return -1;
    for (int i = itemIndex, j = 0; i < len - 1; i++, j++)
    {
        arr[itemIndex + j] = arr[itemIndex + j + 1];
    }
    return len - 1;
}
void print_element(int arr[], int len)
{
    printf("\n\n");
    for (int i = 0; i < len; i++)
    {
        printf("\t%d =  %d\n", i, arr[i]);
    }
    printf("\n");
}
void input_element(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Enter %d number index element : ", i);
        scanf("%d", &arr[i]);
    }
}

void countItem(int arr[], int len)
{
    printf("\n");

    int n = 0;
    int count[len];

    // print_element(count, n);

    int numCount = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                len = removeItem(arr, len, arr[j]);
                j--;
                numCount += 1;
            }
        }
        print_element(arr, len);
        // n++;
        // count[n - 1] = numCount;
        // printf("count[%d] = %d\n", n - 1, count[n - 1]);
        // numCount = 0;
        // count[++n] = numCount;
        // print_element(arr, len);
    }
    print_element(arr, len);
    // print_element(arr, len);
    // int countNum = 0;
    // printf("Enter item for remove : ");
    // scanf("%d", &action_item);
    // len = removeItem(arr, len, action_item);
}
/*
    Input elements: 10, 20, 50, 40, 50, 10, 40
    10 occurs 2 times.
    20 occurs 1 times.
    40 occurs 2 times.
    50 occurs 2 times.
*/