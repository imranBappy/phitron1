#include <stdio.h>
#include <stdlib.h>
int main()
{
    int len;
    scanf("%d", &len);

    double *pArr = (double *)malloc(len * sizeof(double));
    // double pArr[len];
    printf("%p\n", &pArr);
    for (int i = 0; i < len; i++)
    {
        // scanf("%lf", &pArr[i]);
        pArr[i] = i + i;
    }

    double sum = 0.0;
    for (int i = 0; i < len; i++)
    {
        sum += pArr[i];
    }
    printf("\n\tSum of all numbers: %llf\n", sum);
    return 0;
}