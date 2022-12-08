#include <stdio.h>
void sum_and_minus(int a, int b, int *result1, int *result2)
{
    *result1 = a + b;
    *result2 = a - b;
}
int main()
{
    int sum, minus;
    sum_and_minus(20, 10, &sum, &minus);
    printf("Sum = %d, minus = %d\n", sum, minus);
    return 0;
}