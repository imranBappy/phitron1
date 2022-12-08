#include <stdio.h>

void makeDouble(int *a)
{
    *a *= 2;
}
void swap(int *x, int *y)
{
    int tamp = *x;
    *x = *y;
    *y = tamp;
}
int main()
{
    int x = 10, y = 20;
    // printf("X = %d\n", x);
    // makeDouble(&x);
    // printf("X = %d\n", x);
    swap(&x, &y);
    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    return 0;
}