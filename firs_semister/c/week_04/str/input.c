#include <stdio.h>
#include <string.h>
int main()
{

    // printf("Hello World!");
    char name[10];
    // gets(name);
    fgets(name, 10, stdin);
    printf("%s", name);
    printf("\n%d", strlen(name));
    return 0;
}