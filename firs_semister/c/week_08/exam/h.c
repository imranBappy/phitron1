#include <stdio.h>
#include <string.h>

int main()
{
    int count = 1;
    char binary[100];
    gets(binary);
    for (int i = 0; binary[i]; i++)
    {
        if (binary[i] == binary[i + 1])
        {
            count++;
            if (count == 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    printf("NO\n");
    return 0;
}
/*
00111001

10100000001
10101010100000010101010
101010101000000110101010
*/