#include <stdio.h>

int main()
{

    int a = 10;
    int *P = &a;
    int **Q = &P;
    int ***R = &Q;
    ***R = 5;

    printf("%d \n", ***R);
    return 0;
}