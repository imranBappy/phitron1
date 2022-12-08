#include <bits/stdc++.h>
using namespace std;
/*
Min Heap : 5 -> 20 -> 15 -> 50 -> 30 -> 40

step 1 : 15 -> 20 -> 40 -> 50 -> 30 -> 5
step 2 : 20 -> 30 -> 40 -> 50 -> 15 -> 5
step 3 : 30 -> 50 -> 40 -> 20 -> 15 -> 5
step 4 : 40 -> 50 -> 30 -> 20 -> 15 -> 5

*/

void min_heapify(int arr[], int n);
void print_heap(int arr[], int n);

void min_heapify(int arr[], int n, int current)
{
    int l = 2 * current + 1, r = 2 * current + 2, min = current;
    if (l < n && arr[l] < arr[min])
        min = l;
    if (r < n && arr[r] < arr[min])
        min = r;
    if (min != current)
    {
        swap(arr[min], arr[current]);
        min_heapify(arr, n, min);
    }
}

void heap_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        print_heap(arr, n);
        swap(arr[0], arr[n - i]);
        min_heapify(arr, n - i - 1, 0);
    }
}
void print_heap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d -> ", arr[i]);
    printf("\n");
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int non_leaf_start = (n / 2) - 1;

    print_heap(arr, n);
    for (int i = non_leaf_start; i >= 0; i--)
    {
        min_heapify(arr, n, i);
    }
    printf("\nafter heaping : \n");

    print_heap(arr, n);
    printf(" \n");

    heap_sort(arr, n);
    printf("after sorting : \n");
    print_heap(arr, n);

    return 0;
}