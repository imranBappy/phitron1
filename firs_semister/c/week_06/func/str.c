#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = "Hello";
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0', 'A'};

    // char str2[] = {'H', 'e', 'l', 'l', 'o', '\0', 'A'};
    char str2[6];
    strcpy(str2, str);
    printf("Size of arr = %d = %s\n", strlen(str), str);
    printf("Size of arr2 = %d = %s", strlen(str2), str2);

    return 0;
}