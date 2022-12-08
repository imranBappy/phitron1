#include <bits/stdc++.h>
using namespace std;

/*

   1st iteration:
        1st step:7 2 13 2 11 4  -> 2 7 13 2 11 4
        2nd step:2 7 13 2 11 4  -> 2 7 13 2 11 4
        3rd step:2 7 13 2 11 4  -> 2 7 2 13 11 4
        4th step:2 7 2 13 11 4  -> 2 7 2 11 13 4
        5th step:2 7 2 11 13 4  -> 2 7 2 11 4 13
2st iteration:
        1st step:2 7 2 11 4 13  -> 2 7 2 11 4 13
        2nd step:2 7 2 11 4 13  -> 2 2 7 11 4 13
        3rd step:2 2 7 11 4 13  -> 2 2 7 11 4 13
        4th step:2 2 7 11 4 13  -> 2 2 7 4 11 13
3st iteration:
        1st step:2 2 7 4 11 13  -> 2 2 7 4 11 13
        2nd step:2 2 7 4 11 13  -> 2 2 7 4 11 13
        3rd step:2 2 7 4 11 13  -> 2 2 4 7 11 13

Output: 2 2 4 7 11 13
*/

void bubble_sort(int *arr, int n)
{
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        printf("\n%dst iteration:", i + 1);
        for (int j = 0; j < n - i - 1; j++)
        {

            if (j == 0)
                printf("\n\t%dst step:", j + 1);
            else if (j == 1)
                printf("\n\t%dnd step:", j + 1);
            else if (j == 2)
                printf("\n\t%drd step:", j + 1);
            else
            {
                printf("\n\t%dth step:", j + 1);
            }
            for (int k = 0; k < n; k++)
                printf("%d ", arr[k]);

            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]), flag = 0;
            printf(" -> ");
            for (int k = 0; k < n; k++)
                printf("%d ", arr[k]);
        }

        if (flag)
            return;
        flag = 1;
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubble_sort(arr, n);

    printf("\n\nOutput: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);

    return 0;
}