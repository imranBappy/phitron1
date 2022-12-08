#include <stdio.h>

int main()
{

    int a = 11;
    int b = 2;
    const int *const ptr = &a;
    // ptr = &a;
    // int *pb = &b;
    // *pb = *ptr;
    // *ptr = 12;
    // a = 123;
    // b = 123;
    // ptr = &b;
    // printf("Value of ptr is : %d\n", a);
    // printf("Value of ptr is : %d\n", b);
    int arr[] = {1};
    // int *pArr = ;
    *(arr + 1) = 33;
    printf("%d\n", arr[1]);
    return 0;
}