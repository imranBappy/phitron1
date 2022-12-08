#include <stdio.h>

double make_average(int *arr, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return (double)sum / (double)len;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 10};
    printf("Avarage = %0.2lf\n", make_average(arr, sizeof(arr) / 4));

    return 0;
}