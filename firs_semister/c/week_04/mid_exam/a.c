#include <stdio.h>
#include <string.h>
/*

*/

int main()
{

    char name[100];
    gets(name);
    int count = 0;
    char distinct[count];
    for (int i = 0; i < strlen(name); i++)
    {
        int c = 1;
        for (int j = 0; j < count; j++)
        {
            if (name[i] == distinct[j])
            {
                c = 0;
            }
        }
        if (c)
        {
            count++;
            distinct[count - 1] = name[i];
        }
    }
    distinct[count] = '\0';
    // printf("\nResult = %s\n", distinct);
    // printf("count = %d\n", count);
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}