#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int count = 0; count < n; count++)
    {
        int len;
        scanf("%d ", &len);
        char telephone[len];
        gets(telephone);
        int check = 1;
        char x[4];
        x[4] = '\0';
        for (int i = 0; i < strlen(telephone) - 2; i++)
        {
            x[0] = telephone[i];
            x[1] = telephone[i + 1];
            x[2] = telephone[i + 2];
            int c = strcmp("800", x);
            if (!c)
            {
                check = 0;
                printf("YES\n");
                break;
            }
        }
        if (check)
        {
            printf("NO\n");
        }
    }

    return 0;
}