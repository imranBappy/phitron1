#include <stdio.h>
// A. I_love_%username%
int main()
{
    int n;
    scanf("%d", &n);
    int contest[n];
    int amazingContest = 0;
    int less, more;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &contest[i]);
        if (i == 0)
        {
            less = contest[i], more = contest[i];
        }
        else if (less > contest[i])
        {
            less = contest[i];
            amazingContest++;
        }
        else if (more < contest[i])
        {
            more = contest[i];
            amazingContest++;
        }
    }
    printf("%d\n", amazingContest);
    return 0;
}
