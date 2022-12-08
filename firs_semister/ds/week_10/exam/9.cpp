#include <bits/stdc++.h>
using namespace std;

/*


8
3 3 1 7 7 4 4 5
max = 7
arr = { 3, 3, 1, 7, 7, 4, 4, 5, }
count = { 0, 1, 0, 2, 2, 1, 0, 2, }
prefixArr = { 0, 1, 1, 3, 5, 6, 6, 8, }

step 1 :
output = { 0, 0, 0, 0, 0, 5, 0, 0, }
prefixArr = { 0, 1, 1, 3, 5, 5, 6, 8, }

step 2 :
output = { 0, 0, 0, 0, 4, 5, 0, 0, }
prefixArr = { 0, 1, 1, 3, 4, 5, 6, 8, }

step 3 :
output = { 0, 0, 0, 4, 4, 5, 0, 0, }
prefixArr = { 0, 1, 1, 3, 3, 5, 6, 8, }

step 4 :
output = { 0, 0, 0, 4, 4, 5, 0, 7, }
prefixArr = { 0, 1, 1, 3, 3, 5, 6, 7, }

step 5 :
output = { 0, 0, 0, 4, 4, 5, 7, 7, }
prefixArr = { 0, 1, 1, 3, 3, 5, 6, 6, }

step 6 :
output = { 1, 0, 0, 4, 4, 5, 7, 7, }
prefixArr = { 0, 0, 1, 3, 3, 5, 6, 6, }

step 7 :
output = { 1, 0, 3, 4, 4, 5, 7, 7, }
prefixArr = { 0, 0, 1, 2, 3, 5, 6, 6, }

step 8 :
output = { 1, 3, 3, 4, 4, 5, 7, 7, }
prefixArr = { 0, 0, 1, 1, 3, 5, 6, 6, }

output = { 1, 3, 3, 4, 4, 5, 7, 7, }


*/
void counting_sort(int arr[], int n, int max)
{
    int count[max + 1], output[n];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i < n; i++)
        count[i] = count[i - 1] + count[i];

    for (int i = n - 1; i > -1; i--)
        output[--count[arr[i]]] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    counting_sort(arr, n, 7);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}