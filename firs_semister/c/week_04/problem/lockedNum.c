#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10] = {0};
    char str[10];
    fgets(str, 10, stdin);
    for (int i = 0; i < 9; i++)
    {
        char c = str[i];
        int digit = c - '0';
        arr[digit]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}
