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

void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ,", arr[i]);
    cout << endl;
}

int main()
{
    int n = 0;
    int arr[100];

    int nextInput;
    cin >> nextInput;
    if (nextInput == -1)
    {

        return 0;
    }
    else
    {
        arr[0] = nextInput;
        // n++;

        nextInput = 2;
    }
    while (nextInput--)
    {
        int temp;
        cin >> temp;
        if (-1 != temp)
        {
            nextInput += 2;
            arr[n++] = temp;
        }
        else
        {
            arr[n++] = temp;
        }
    }

    int non_leaf_start = (n / 2) - 1;
    for (int i = non_leaf_start; i >= 0; i--)
    {
        max_heapify(arr, n, i);
    }
    // print_arr(arr, n);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 2)
        {
            printf("%d\n", arr[0]);
        }
        else if (temp == 1)
        {
            int temp;
            cin >> temp;
            arr[n++] = arr[0];
            arr[0] = temp;
            int non_leaf_start = (n / 2) - 1;
            for (int j = non_leaf_start; j >= 0; j--)
            {
                max_heapify(arr, n, j);
            }
        }
    }
    // print_arr(arr, n);

    // printf("\nafter heapify : \n");

    // print_arr(arr, n);

    return 0;
}