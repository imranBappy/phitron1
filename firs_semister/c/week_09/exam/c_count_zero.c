#include <stdio.h>

void count_zero(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '0')
            count++;
    }
    printf("Total Zero : %d\n", count);
}

int main()
{

    count_zero("10101010100");

    return 0;
}