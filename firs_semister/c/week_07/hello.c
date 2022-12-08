#include <stdio.h>
int main()
{
    int arr[12];
    int res = sizeof(arr) / sizeof(arr[2]);
    printf("%d", res);

    return 0;
}
