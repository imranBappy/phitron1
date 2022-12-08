#include <stdio.h>
/*
 */
int main()
{
    char str[1000] = {};
    gets(str);
    if ('Z' < str[0])
    {
        str[0] = str[0] - 32;
    }
    printf("%s\n", str);
    return 0;
}