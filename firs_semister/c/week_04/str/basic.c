#include <stdio.h>

int main()
{
    char str[] = "This is string\n";
    printf("%s", str);
    puts(str);
    int len = sizeof(str);
    printf("\n%d\n", len);
    return 0;
}