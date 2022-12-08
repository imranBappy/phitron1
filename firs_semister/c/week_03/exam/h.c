#include <stdio.h>
/*
Ragnar Lothbrok is a restless warrior
Ragnar ak jon restless jodda

and family man who longs to find

*/
int main()
{
    int n;
    scanf("%d", &n);
    char n1[] = {'I', ' ', 'h', 'a', 't', 'e'};
    char n2[] = {'I',
                 ' ',
                 'l',
                 'o',
                 'v',
                 'e'};
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("that I love ");
        }
        else
        {
            if (1 < i)
            {
                printf("that I hate ");
            }
            else
            {
                printf("I hate ");
            }
        }
    }
    printf("it\n");
    // if (n == 1)
    // {
    //     printf("I hate it");
    // }
    // else if (n == 2)
    // {
    //     printf("I hate that I love it");
    // }
    // else if (n == 3)
    // {
    //     printf("I hate that I love that I hate it");
    // }

    return 0;
}