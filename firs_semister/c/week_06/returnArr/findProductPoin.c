#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    // printf("p = %p  \n", &arr[2]);
    for (int i = 0; i < n; i++)
    {
        // int temp;
        // scanf("%d", &temp);
        // scanf("%d", &*(arr + i));
        scanf("%d", arr + i);
        // scanf("%d", &arr[i]);

        // *(&arr[i]) = temp;
    }

    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= *(arr + i);
    }
    printf("prod = %d\n", prod);
    return 0;
}