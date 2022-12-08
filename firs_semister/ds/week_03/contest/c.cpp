#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int i, j, item;
    for (i = 1; i < n; i++)
    {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
}
int last_index(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[0] != arr[i])
        {
            return i;
        }
    }
    return -1;
}

/*

2 4 1 1 5 1
1 1 1 2 4 5 = len = 6

0 1 2 3 4 5

তাহলে উত্তর হচ্ছে 6-2+1=3 (+1 করার কারন হচ্ছে ২ নং ইন্ডেক্স হচ্ছে ৩নং ভ্যেলু সিরিয়াল এর)

*/
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        // cout << endl;

        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr[j] << " ";
        // }
        // cout << endl;
        insertion_sort(arr, n);
        // cout << endl;

        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr[j] << " ";
        // }
        // cout << endl;
        int index = last_index(arr, n);
        // cout << "index : " << index << endl;

        if (index == -1)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << n - index << endl;
        }
    }

    return 0;
}