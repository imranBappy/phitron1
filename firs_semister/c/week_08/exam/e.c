#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int sum = 0;

    while (n)
    {

        sum += n % 10;
        n = (int)n / 10;
    }
    printf("%d", sum);
    return 0;
}