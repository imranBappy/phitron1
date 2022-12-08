#include <stdio.h>
int square(int a);

int main()
{
    square(10);
    return 0;
}
int square(int a)
{
    printf("%d", a * a);
    return a * a;
}