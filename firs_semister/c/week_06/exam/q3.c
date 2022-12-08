#include <stdio.h>
#include <string.h>
void makeStrCopy(char in[], char out[])
{
    int i = 0;
    while (in[i])
    {
        out[i] = in[i];
        i++;
    }
    out[i] = '\0';
}
int main()
{
    char str[1000];
    gets(str);
    char out[strlen(str) + 1];
    makeStrCopy(str, out);
    printf("out = %s, len = %d", out, strlen(out));
    return 0;
}