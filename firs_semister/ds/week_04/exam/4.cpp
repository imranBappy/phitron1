#include <bits/stdc++.h>
using namespace std;

/*
1st step:5 1 3 8 2  -> 1 5 3 8 2
2nd step:1 5 3 8 2  -> 1 3 5 8 2
3th step:1 3 5 8 2  -> 1 3 5 8 2
4th step:1 3 5 8 2  -> 1 2 3 5 8

*/
void inserting_sort(int arr[], int n)
{
    int item, i, j;
    for (i = 1; i < n; i++)
    {
        printf("%dst iteration:\n", i);
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
            
        }
       
        arr[j + 1] = item;
        printf("\t%dst step:", i);
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
        printf("\n");
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    inserting_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}