#include <stdio.h>
#include <string.h>
int sLen(char str[])
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}
void sCopy(char str[], char str2[])
{
    int i = 0;
    while (str2[i])
    {
        str[i] = str2[i];
        i++;
    }
}
void concat(char str[], char str2[])
{
    int i = 0;
    int len = sLen(str);
    while (str2[i])
    {
        str[len] = str2[i];
        i++;
        len++;
    }
    str[len] = '\0';
}
int main()
{
    char str[] = "Imran";

    char str2[100];

    strcpy(str2, str);

    printf("size of str sizeof = %d,  %s\n", strlen(str), str);
    printf("size of str2 strlen = %d,  %s\n", strlen(str2), str2);

    return 0;
}