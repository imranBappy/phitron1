#include <bits/stdc++.h>
using namespace std;

void insert1(int *arr, int size, int pos, int item)
{

    if (pos < 0 || size < pos)
    {
        cout << "Invalid index\n";
        return;
    }
    for (int i = size; pos <= size; i--)
    {
        if (i == pos)
        {
            arr[i] = item;
            return;
        }
        arr[i] = arr[i - 1];
    }
}
void insert2(int *arr, int size, int pos, int item)
{
    if (pos < 0 || size < pos)
    {
        cout << "Invalid index\n";
        return;
    }
    arr[size] = arr[pos];
    arr[pos] = item;
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int size = 4;
    int arr[10] = {3, 5, 6, 7};
    print(arr, size);
    // insert1(arr, size, 0, 1000);
    insert2(arr, size+1, 4, 1000);

    print(arr, size + 1);

    // insert1(arr, size, 2, 2000);
    insert2(arr, size+2, 2, 2000);

    print(arr, size + 1);

    return 0;
}