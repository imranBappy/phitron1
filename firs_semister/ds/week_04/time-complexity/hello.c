#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long int n = 184460;
    unsigned long long int i, j;
    // unsigned long long int sum = 0;
    unsigned long long int *arr = (unsigned long long int *)malloc(sizeof(unsigned long long int) * n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            // sum += j;
            i *j / i;
        }
        arr[i] = i;
    }
    // printf("sum = %llu\n", sum);
    return 0;
}