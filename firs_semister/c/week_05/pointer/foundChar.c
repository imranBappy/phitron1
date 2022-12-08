#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Hello, world!";
    char *first = str;
    char c = 'o';
    char *ch = strchr(str, c);
    if (ch)
    {
        printf("%c Found At %d !\n", c, ch - first);
    }
    else
    {
        printf("%c Not Found!", c);
    }

    return 0;
}