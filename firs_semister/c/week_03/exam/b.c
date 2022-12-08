#include <stdio.h>
/*
Abu and Babu close friend
recently tara admitted hoyese same university te
protomane tara university er halls thakte cay
and tara same hall er some room a thake cay
hall n = 10 ta rooms ache
ai muhurte i-th (4th) room pi 10 jon theke ai room a
ai total room thakte parbe qi 50 jon

Your task is to count how many rooms has free place for both Abu and Babu.
tomar kaj holo count korte hobe kotota room free jayga ache abu and babu er jonno

imranbappy
*/
int main()
{
    int count = 0, n, p, q;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &p, &q);
        if (q - p >= 2)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}