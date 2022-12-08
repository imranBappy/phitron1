#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Hello";

    char *c = strchr(str, 'l');
    printf("%d\n", c - str); // it will have been implement
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c", str[i]);
    // }

    // printf("%s\n", str + 1);

    return 0;
}