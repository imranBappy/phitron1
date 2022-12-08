#include <stdio.h>

struct Add
{
    int num1, num2, result;
};
struct Add addtation(int num1, int num2)
{
    return (struct Add){num1, num2, num1 + num2};
}
int main()
{
    struct Add add = addtation(12, 3);
    printf("%d + %d = %d\n", add.num1, add.num2, add.result);
    return 0;
}