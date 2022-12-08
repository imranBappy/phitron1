#include <stdio.h>
/*
Takahashi:  "Run for A seconds at BB meters per second and then rest for CC seconds."
Aoki: "Run for DD seconds at EE meters per second and then rest for FF seconds."

When XX seconds have passed since they simultaneously started running,
which of Takahashi and Aoki is ahead?

// A 3 3 6 2 5 10
3 1 4   1 5 9   2
A B C   D E F   X

a = 4;
b = 3;
c = 3;
// Loop must use korte hobe
d = 6;
e = 2;
f = 5;

x = 10;
*/
// imranhossenbappy

/*
total time x;
ke koto dur jete pare
total time
*/

int main()
{
    // int res = walk(1, 2);
    // printf("res = %d\n", res);
    int a, b, c, d, e, f, x;

    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);
    int Takahashi = 0;
    int Aoki = 0;

    // a = 4, b = 2, c = 3, x = 1000;
    // a = 4, b = 3, c = 2, x = 1000;

    int t_run = 0, t_rest = 0;
    int a_run = 0, a_rest = 0;

    for (int i = 1; i <= x; i++)
    {
        if (t_run != a)
        {
            t_rest = 0;
            Takahashi++;
            t_run++;
        }
        else
        {
            t_rest++;
            if (t_rest == c)
            {
                t_run = 0;
            }
        }

        if (a_run != d)
        {
            a_rest = 0;
            Aoki++;
            a_run++;
        }
        else
        {
            a_rest++;
            if (a_rest == f)
            {
                a_run = 0;
            }
        }
        // printf("i = %d\tt_run = %d\tt_rest = %d\tTakahashi = %d\n", i, t_run, t_rest, Takahashi);
    }
    if (Takahashi * b > Aoki * e)
    {
        printf("Takahashi");
    }
    else if (Takahashi * b < Aoki * e)
    {
        printf("Aoki");
    }
    else
    {
        printf("Draw");
    }
    // printf("\nTakahashi = %d\nAoki = %d", Takahashi, Aoki);
    return 0;
}
/*

*/