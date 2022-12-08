#include <stdio.h>

int main()
{
    // int x = 10, y = 20;
    // printf("%d\n", x);
    // printf("%p\n", &x);
    // printf("%p\n", &y);

    // int a[5] = {0, 1, 2, 3, 4};
    // printf("%p\n", &a);
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);

    // int x = 3;
    // int *p;
    // p = &x;
    // x = 123;
    // printf("X = %d\n", x);
    // printf("P = %p\n", &x);

    // printf("P = %d\n", *p);
    // printf("Pointer = %p\n", p);

    // int x = 10;
    // int y;
    // int *p;
    // printf("Value of x : %d\n", x); // 10
    // p = &x;
    // y = *p;
    // *p = 15;

    // printf("Value of x : %d\n", x);    // 15
    // printf("Value of y : %d\n", y);    // 10
    // printf("Value of *p : %d\n", *p);  // 15
    // printf("Address of x : %p\n", &x); // aaa
    // printf("Address of y : %p\n", &y); // 000
    // printf("Value of p : %p\n", p);    // aaa

    // int x = 10;
    // int y = x;

    // printf(" x =%d\n", x);
    // printf("y = %d\n", y);
    // x = 120;
    // printf(" x =%d\n", x);
    // printf("y = %d\n", y);

    // int x = 10, y;
    // int *p, *q;

    // p = &x;  // p = xxx
    // q = &y;  // q = yyy
    // y = *p;  // y = 10
    // *p = 15; //*p = 15, x = 15
    // *q = 20; //*q = 20

    // printf("Value of x : %d\n", x);
    // printf("Value of y : %d\n", y);
    // printf("Value of *p : %d\n", *p);
    // printf("Value of *q : %d\n", *q);

    // char a[10];
    // gets(a);
    // printf("A = %s", a);

    int n = 10;
    int a[n], b[n];
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    char a[10];
    a[0] = 'b';
    a[1] = 'a';
    a[2] = 'n';
    a[3] = 'a';
    a[4] = 'n';
    a[5] = 'a';
    a[6] = '\0';
    return 0;
}