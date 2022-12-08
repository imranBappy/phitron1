#include <stdio.h>
/*
period = সময়কাল
away = দূরে

Problem Statement:
Masud recently tar dream job peyeche.
Masud protidin basa chere jay S clock and basay phite ase T clock.
তিনি বাড়ির বাইরে থাকার সময় তারিখ পরিবর্তন হতে পারে.
এই সময়ের বাইরে
se sob somoy basay thake

*/
int main()
{
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);
    if (s <= t)
    {
        if (s <= x && x < t)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        if (x == t)
        {
            printf("No");
            return 0;
        }
        if (s <= x || (1 <= x && x < t))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}