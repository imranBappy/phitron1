#include <stdio.h>

int main()
{
    // int a = 10;

    // int *p = &a;
    // int **q = &p;
    // int ***x = &q;

    // printf("a = %d\n", &a);
    // printf("p = %d\n", p);
    // printf("*q = %d\n", *q);

    // printf("x = %d\t&q = %d\n", x, &q);
    // printf("*x = %d\t&p = %d\n", *x, &p);
    // printf("**x = %d\t&a = %d\n", **x, &a);
    // printf("***x = %d\ta = %d\n", ***x, &a);
    // int a[] = {1, 2, 3, 4, 5};

    // printf("%d", *(a + 2));
    // double p = pow(2, 2.2);

    // printf("%.3lf", p);
    char arr[] = "abcd";
    int a[] = {1, 2, 3, 4};
    printf("%d", sizeof(a) / 4);
    return 0;
}