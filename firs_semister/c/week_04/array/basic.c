#include <stdio.h>

int main()
{
    // int arr[] = {111, 22, 33};
    // printf(" arr[2] %p", &arr[0]);
    // printf("A = %d", sizeof(arr));
    // printf("B = %d", arr[3]);
    // formula array of size sizeof(arr)/ sizeof(arr[0])
    // printf("Size of array = %d", sizeof(arr) / sizeof(arr[0]));
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d = %d\n", i, arr[i]);
    // }
    // printf("%d\n", sizeof(arr) / sizeof(arr[0]));
    // char hello[] = {'H', 'e', 'l', 'l', 'o'};
    // int len = sizeof(hello) / sizeof(hello[0]);
    // for (int i = 0; i < len; i++)
    //     putchar(hello[i]);

    // int ar[1000] = {1};
    // for (int i = 0; i < 1000; i++)
    // {
    //     printf("%d\n", ar[i]);
    // }
    // int a[] = {0,
    //            2,
    //            1,
    //            4,
    //            3};
    // printf("%d\n", a[a[1] + 1]);
    // int fib[5];
    // fib[0] = fib[1] = fib[2] = 1;
    // printf("%d\n", fib[0]);

    int fib[5];
    fib[0] = fib[1] = 1;
    for (int i = 2; i < 5; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d", fib[4]);
    return 0;
}