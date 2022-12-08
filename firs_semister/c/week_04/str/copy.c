#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello World Bangladesh lorem dasjndl; djasdkls ladlasdj";
    char str2[10];
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     str2[i] = str[i];
    //     printf("%c", str[i]);
    //     i++;
    // }
    // str2[i] = '\0';
    // printf("\n\n%s", str2);
    // printf("\n\n%d", strlen(str));
    // strcpy(str2, str,);
    strncpy(str2, str, 5);
    str2[5] = '\0';
    printf("%s", str2);
    printf("\n\n%d", strlen(str2));
    return 0;
}