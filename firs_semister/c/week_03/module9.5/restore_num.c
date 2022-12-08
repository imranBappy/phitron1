#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    // int maxList[4];
    int sum = 0;
    // if (A < B && C < B && D < B)
    // {
    //     maxList[0] = A, maxList[1] = D, maxList[2] = C, maxList[3] = B;
    // }
    // else if (B < A && C < A && D < A)
    // {
    //     maxList[0] = B, maxList[1] = D, maxList[2] = C, maxList[3] = A;
    // }
    // else if (B < C && A < C && D < C)
    // {
    //     maxList[0] = B, maxList[1] = D, maxList[2] = A, maxList[3] = C;
    // }
    // else if (B < D && A < D && C < D)
    // {
    //     maxList[0] = B, maxList[1] = C, maxList[2] = A, maxList[3] = D;
    // }
    if (A > sum)
        sum = A;
    if (B > sum)
        sum = B;
    if (C > sum)
        sum = C;
    if (D > sum)
        sum = D;

    if (A < sum)
        printf("%d ", sum - A);
    if (B < sum)
        printf("%d ", sum - B);
    if (C < sum)
        printf("%d ", sum - C);
    if (D < sum)
        printf("%d ", sum - D);
    // int a, b, c;
    // a = maxList[3] - maxList[0];
    // b = maxList[3] - maxList[1];
    // c = maxList[3] - maxList[2];
    // printf("%d %d %d", a, b, c);
    return 0;
}
