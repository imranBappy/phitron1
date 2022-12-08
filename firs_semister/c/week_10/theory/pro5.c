#include <stdio.h>
#include <string.h>
int main()
{

    char arr[10];
    char str[1000];
    gets(str);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            arr[str[i] - 48] = -1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != -1)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}