#include <stdio.h>

int main()
{

    // char ch = 'a';
    // char *pCh = &ch;
    // printf("ch = %p\n\n", &ch);
    // printf("%lld\n", pCh);
    int a;
    int b;
    int *pA, *pB;
    pA = &a;
    pB = &b;
    printf("pA = %lld, pB = %lld\n", pA, pB);
    printf("Difference = %d", pA - pB);

    return 0;
}