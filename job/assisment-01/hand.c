#include <stdio.h>

int main()
{

    long long n;
    scanf("%lld", &n);
    long long result = (n * (n - 1)) / 2;
    printf("%lld\n", result);
    return 0;
}