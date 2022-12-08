#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "HAA";
    int len = strlen(str);
    for (int i = 0; i < len / 2 + 1; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("It is not Palindrome");
            return 0;
        }
    }
    printf("It is Palindrome");

    return 0;
}