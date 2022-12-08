#include <stdio.h>

int main()
{
    // long long a;
    // int b;
    // int c;
    // printf("%lld\n", &b);
    // printf("%p\n", &b);
    // int *pVal;
    // int val;
    // printf("%p\n", &pVal);
    // int a = 100;
    // int *b = &a;
    // printf("a = %d\n", a);
    // printf("b = %d\n", *b);
    // *b = 1000;
    // printf("a = %d\n", a);
    // printf("b = %d\n", *b);
    // printf("\n\n\n\n a = %d", *&a);
    const int x = 100;
    const int *const p;
    // p = &x;
    // *p = 123;

    int m = 300;
    p = &m;

    printf("a = %d\n", x);
    printf("p = %d\n", *p);
    return 0;
}