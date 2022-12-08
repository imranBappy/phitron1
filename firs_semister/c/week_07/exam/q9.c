#include <stdio.h>
#include <string.h>
int main()
{

    char x[] = "00101100";
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] == '1')
        {
            x[i] = '0';
            break;
        }
    }
    printf("%s\n", x);
    return 0;
}
