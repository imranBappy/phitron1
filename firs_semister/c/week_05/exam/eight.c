#include <stdio.h>
void stringCat(char a[], char b[], char *out)
{
    int i = 0;
    *out = a[i];
    for (i = 1; a[i] != '\0'; i++)
    {
        out = out + 1;
        *out = a[i];
    }
    for (int j = 0; b[j] != '\0'; i++, j++)
    {
        out = out + 1;
        *out = b[j];
    }
}
int main()
{
    char a[] = "Hello ";
    char b[] = "Bangladesh!";
    char result[1000] = "";
    stringCat(a, b, &result[0]);
    printf("%s\n", result);
    return 0;
}