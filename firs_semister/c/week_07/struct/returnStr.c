#include <stdio.h>
struct Array
{
    int index;
    int *arr;
};

int main()
{

    struct Array numbers;
    numbers.index = 5;
    // for (int i = 0; i < 5; i++)
    // {
    //     numbers.arr[i] = i + 1;
    // }
    // printf("%d\n", numbers.arr);
    // printf("%p\n", numbers.arr);
    // numbers.arr = 12;
    // printf("%d\n", numbers.arr);
    int *arr;
    // arr = 123;
    int a = 123;
    // arr = &a;
    *arr = 123;

    // printf("%d\n", &a);
    // printf("%d\n", arr);
    printf("%d\n", *arr);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);

    printf("Index : %d\n", numbers.index);

    return 0;
}