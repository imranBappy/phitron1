#include <stdio.h>

int main()
{
    int n, i, grade;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &grade);
        int next1, next2;
        if (grade < 38)
        {
            printf("%d\n", grade);
        }
        else if (grade % 5 == 0)
        {
            printf("%d\n", grade);
        }
        else if ((grade + 1) % 5 == 0)
        {
            printf("%d\n", grade + 1);
        }
        else if ((grade + 2) % 5 == 0)
        {
            printf("%d\n", grade + 2);
        }
        else
        {
            printf("%d\n", grade);
        }
    }

    return 0;
}