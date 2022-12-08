#include <stdio.h>

struct Numbers
{
    int arr[10];
};
struct Numbers inputArr()
{
    struct Numbers num;
    for (int i = 0; i < 10; i++)
    {
        num.arr[i] = (i * i + i - i) + (i + 1) / (i + 1);
    }
    return num;
}
int main()
{
    struct Numbers num = inputArr();
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", num.arr[i]);
    }
    return 0;
}