#include <stdio.h>

/*
Take integer value as input and output that value until you get 42. The integer value will be less than 100

ekat int value input neo and jotokhon projonto 42 nah pabo
je value ta 100 er theke kom hobe

*/

int main()
{

    int n;
    int check = 0;
    while (1)
    {
        scanf("%d", &n);

        if (n == 42)
        {
            break;
        }
        if (n < 100)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}