#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n = 100;
    float *arr = (float *)malloc(sizeof(float) * n);

    printf("%d\n", sizeof(float));

    return 0;
}