#include <stdio.h>
#include <string.h>
int main()
{
    
    char str[1000];
    gets(str);
    int f;

    for (int i = 48; i < 58; i++)
    {
        f = 0;
        for (int j = 0; str[j]; j++)
        {
            if (i == str[j])
            {
                f++;
            }
        }
        printf("%d ", f);
    }

    return 0;
}