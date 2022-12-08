#include <stdio.h>

struct Fun
{
    int sum;
};

int main()
{
    struct Fun f;
    struct Fun *fp;
    f.sum = 100;
    fp = &f;
    fp->sum = 500;
    printf("sum = %d\n", f.sum);

    return 0;
}