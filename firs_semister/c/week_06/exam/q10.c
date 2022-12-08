#include <stdio.h>
#include <string.h>
int main()
{
    char text[1000] = "Hello aWorld";
    char *c1 = strstr(text, "a");
    char *c2 = strchr(text, 'a');
    printf("%s\n", c1);
    printf("%c", *c2);

    return 0;
}
// 