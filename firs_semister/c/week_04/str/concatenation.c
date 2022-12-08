#include <stdio.h>
#include <string.h>
int main()
{

    char name1[100] = "Imran ";
    char name2[100] = "Bappy";
    // char concat[strlen(name1) + strlen(name2) + 1];
    // char i = 0, j = 0;
    // while (name1[i] != '\0')
    // {
    //     concat[i++] = name1[i];
    // }
    // while (name2[i] != '\0')
    // {
    //     concat[i++] = name2[j++];
    // }
    // concat[i] = '\0';
    // strcat(name1, name2);
    strncat(name1, name2, 5);
    printf("%s", name1);

    return 0;
}