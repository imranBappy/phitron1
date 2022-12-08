#include <stdio.h>
#include <string.h>
int main()
{

    char str[10000];
    char ch;
    printf("Enter string : ");
    gets(str);
    printf("Enter char : ");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (ch == str[i])
        {
            printf("position : %d\n", i);
        }
    }

    return 0;
}