#include <bits/stdc++.h>
using namespace std;

int *counting_sort(int *arr, int max, int n)
{
    int *count = new int[max + 1];
    for (int i = 0; i < n; i++)
        count[i] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    return count;
}

int main()
{

    int arr[] = {5, 3, 3, 1, 2, 4, 5, 6, 7, 8};
    int *count = counting_sort(arr, 8, 10 + 1);
    for (int i = 0; i < 11; i++)
    {
        if (count[i] > 1)
        {
            for (int j = 0; j < count[i]; j++)
            {
                printf("%d, ", i);
            }
        }
        else if (count[i] != 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}