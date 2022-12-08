#include <stdio.h>
#include <string.h>
/*
Ashiq doesn't love strings. But he really likes letter 'a'. He assumes a string beautiful if more than half of it's character are 'a'. For example some beautiful strings are "baaba", "a", "aqawa" , but "abb", "waeaia" are not.

Ashiq string love kore nah. but se like kore 'a'. Se darona kore ekta string a beautiful jodi sei string ordeker bese a theke


As Ashiq only loves beautiful strings, so he wanted to erase some character (possibly zero) from the string s such that the string become longest beautiful string. So he wants to know what will be the size of longest string remaining after erase some character( possibly zero) to get a beautiful string.
It is guaranteed that the string will consist of atleast one 'a'. So answer always exists.


Ashiq sudu beautiful stings love kore. Se ceyesilo kisu char muchte from string s jekhon je boro string beautiful


// xaxxxxa
newLen = 1;
lop:
    if str[i] != a:
    len = len -1;

    if ((newLen / 2) < count_a)
    {
        printf("output len : %d\n", len);
    }
    "abc"
    char [4] = "abc\0"
    0 , '\0'
    1

*/

int main()
{

    char str[50];
    gets(str);
    int count_a = 0;
    int i = 0;
    int len = strlen(str);
    while (str[i])
    {
        if (str[i] == 'a')
        {
            count_a++;
        }
        i++;
    }
    if ((len / 2) < count_a)
    {
        printf("%d\n", len);
        return 0;
    }

    int lenLen = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != 'a')
        {
            lenLen = lenLen - 1;
        }
        if ((lenLen / 2) < count_a)
        {
            printf("%d\n", lenLen);
            return 0;
        }
    }
    return 0;
}