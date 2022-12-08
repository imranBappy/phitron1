#include <bits/stdc++.h>
using namespace std;
void print_arr(int *arr, int n);
void max_heapify(int heap[], int heap_size, int current)
{
    int l, r, largest = current;
    l = 2 * current + 1;
    r = 2 * current + 2;
    if (heap[largest] < heap[l] && l < heap_size)
        largest = l;
    if (heap[largest] < heap[r] && r < heap_size)
        largest = r;
    if (current != largest)
    {
        swap(heap[current], heap[largest]);
        max_heapify(heap, heap_size, largest);
    }
}
bool is_max_heap(int H[], int n)
{
    for (int i = n; i > 1; i--)
        if (H[(i / 2) - 1] < H[i - 1])
            return false;
    return true;
}
void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ,", arr[i]);
    cout << endl;
}

void heap_sort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        printf("%d ) ", i - n);
        print_arr(arr, n);
        printf("arr[0]  : %d, arr[%d] : %d\n", arr[0], i, arr[i]);
        swap(arr[0], arr[i]);
        printf("%d ) ", i - n);
        print_arr(arr, n);
        max_heapify(arr, i, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int non_leaf_start = (n / 2) - 1;

    printf("input : \n");
    print_arr(arr, n);
    for (int i = non_leaf_start; i >= 0; i--)
    {
        max_heapify(arr, n, i);
    }
    printf("\nafter heapify : \n");
    print_arr(arr, n);

    printf("\nafter Sorting : \n");
    heap_sort(arr, n);
    print_arr(arr, n);

    printf("Lef Nodes : %d \n", non_leaf_start);
    printf("Length : %d\n", n);
    return 0;
}