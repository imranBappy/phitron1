#include <stdio.h>

int main()
{

    int abc = 0, bca = 0, cab = 0;
    scanf("%d", &abc);
    int change = abc;
    int a, b, c;
    c = change % 10;
    change = change / 10;
    b = change % 10;
    change = change / 10;
    a = change % 10;

    bca = bca * 10 + b;
    bca = bca * 10 + c;
    bca = bca * 10 + a;

    cab = cab * 10 + c;
    cab = cab * 10 + a;
    cab = cab * 10 + b;
    printf("%d", abc + bca + cab);
    return 0;
}