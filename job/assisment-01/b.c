#include <stdio.h>
#include <string.h>
int main()
{
    // freopen("input.txt", "r", stdin);
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int value[26];
    int free[26];

    memset(free, 0, sizeof(free));
    memset(value, 0, sizeof(value));

    for (int i = 0; i < n; i++)
    {
        free[s[i] - 97]++;
    }
    for (int i = 0; i <= 26; i++)
        value[i] = free[i];

    // for (int i = 0; i <=26; i++)
    //     printf("%d ", free[i]);
    // printf("\n");
    // for (int i = 0; i < 26; i++)
    //     printf("%d ", value[i]);
    // printf("\n");

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 25 - i; j++)
        {
            if (value[j] < value[j + 1])
            {
                int temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (value[i] > 0)
        {
            char c = '\0';

            for (int j = 0; j < value[i]; j++)
            {
                // printf("\nvalue[i] = %d\n", value[i]);
                if (!c)
                {
                    for (int k = 0; k <= 26; k++)
                    {
                        if (value[i] == free[k])
                        {
                            c = 'a' + k;
                            free[k] = -1;
                            break;
                        }
                    }
                }
                printf("%c", c);
            }
        }
    }

    return 0;
}