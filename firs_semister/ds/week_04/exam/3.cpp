#include <bits/stdc++.h>
using namespace std;
int *counting_sort(int arr[], int n, int max)
{
    int count[max + 1];
    int sum[max + 1];
    int *output = (int *)calloc(n, sizeof(int));
    printf("arr = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}\n");
    // input 0 in count arr
    for (int i = 0; i < max + 1; i++)
        count[i] = 0;

    // counting
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // prefix sum
    sum[0] = count[0];
    for (int i = 1; i < max + 1; i++)
        sum[i] = count[i] + sum[i - 1];

    printf("count = { ");
    for (int i = 0; i < max + 1; i++)
    {
        printf("%d, ", count[i]);
    }
    printf("}\n");

    printf("prefixArr = { ");
    for (int i = 0; i < max + 1; i++)
    {
        printf("%d, ", sum[i]);
    }
    printf("}\n\n");

    // output
    for (int i = n - 1; i >= 0; i--)
    {
        int k = arr[i];
        output[sum[k] - 1] = arr[i];
        sum[k] = sum[k] - 1;
        printf("step %d : \n", n - i);
        printf("output = { ");
        for (int i = 0; i < n; i++)
        {
            printf("%d, ", output[i]);
        }
        printf("}\n");
        printf("prefixArr = { ");
        for (int i = 0; i < max + 1; i++)
        {
            printf("%d, ", sum[i]);
        }
        printf("}\n\n");
    }
    return output;
}
int max_arr(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
        m = max(m, arr[i]);
    return m;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = max_arr(arr, n);
    cout << "max = " << maximum << endl;

    int *output = counting_sort(arr, n, maximum);
    printf("output = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", output[i]);
    }
    printf("}\n");

    // cout << max(1, 2) << endl;

    return 0;
}
