#include <stdio.h>

int main()
{
    int limak, bob, year;
    scanf("%d%d", &limak, &bob);
    if (limak > bob)
    {
        printf("%d\n", 0);
        return 0;
    }
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        year++;
    }
    printf("%d\n", year);
    return 0;
}