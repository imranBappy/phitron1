#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[1000000];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        gets(str);
        if (strlen(str) < 11)
        {
            printf("%s\n", str);
            continue;
        }
        printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
    }
    return 0;
}