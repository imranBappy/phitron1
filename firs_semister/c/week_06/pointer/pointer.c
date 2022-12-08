#include <stdio.h>
// 4 kore rakhe rak{hte jodi smane jaga nah thake
// void test(int arr[], 10)
// {
//     printf("size of arr = %lld\n", arr);
// }
// keno painter 8 bit ase
int main()
{
    // int var;
    // int var2;
    // printf("%p == %lld\n", &var, &var);
    // printf("%p == %lld\n", &var2, &var2);

    // double *pVar = &var;

    // printf("%p == %lld\n", pVar, pVar);

    int arr[10] = {9, 1, 20, 30, 4, 5, 6, 7};
    printf("size of arr = %lld\n", arr);
    printf("size of arr[0] = %lld\n", &arr[0]);
    printf("size of arr[1] = %lld\n", &arr[1]);
    int *p;
    p = &arr[1] + 2;
    printf("size of arr[2] = %d\n", *p);

    // printf("%lld == %d \n", arr, *arr);
    // printf("%lld == %lld == %d\n", arr + 1, &arr[1], *(arr + 1));
    // int x = 1000;
    // printf("size = %d\n", sizeof(&x));
    // printf("arr = %d\n", sizeof(arr));
    // test(arr);
    return 0;
}
