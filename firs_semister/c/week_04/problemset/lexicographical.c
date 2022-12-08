#include <stdio.h>
/*
compare to string upercase and lowercase no matter
*/
int main()
{

    char a[1000000000], b[1000000000];
    gets(a);
    gets(b);
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] != b[i])
    {
        i++;
    }

    if (b[i] == '\0' && a[i] != '\0')
    {
        }

    return 0;
}