#include <stdio.h>
float make_sum(float x, float y)
{
    return x + y;
}
int main()
{
    printf("Result = %0.2f\n", make_sum(12.5f, 2.5f));
    return 0;
}