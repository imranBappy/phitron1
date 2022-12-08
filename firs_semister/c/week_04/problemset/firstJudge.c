#include <stdio.h>
#include <string.h>
int main()
{

    char a[1000], b[] = "Hello,World!";
    gets(a);
    // printf("%d\n", strlen(a));
    // printf("%d\n", strlen(b));
    int i = 0;
    while (a[i] == b[i] && b[i] != '\0' && a[i] != '\0')
        i++;
    // printf("%d\n", i);
    if (strlen(a) == strlen(b) && i == strlen(b))
    {
        printf("AC");
    }
    else
    {
        printf("WA");
    }

    return 0;
}