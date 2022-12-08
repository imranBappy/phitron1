#include <stdio.h>
void makeSum(int a, int b, int *sum)
{
    *sum = a + b;
}
int main()
{
    int sum;
    makeSum(10, 20, &sum);
    printf("%d", sum);
}