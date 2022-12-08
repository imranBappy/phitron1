#include <stdio.h>
#include <string.h>
//
// [a, b, c, d, b, a]; abcdba
//  0  1  2  3  4  5
// index 2 to ‘d’
// 2 number index er value d te // abddba = abddba
// index 3 to ‘c’
// or 3 number index er value c te abccba // abccba
int check_palindrome(char *str)
{
    int n = strlen(str);
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        printf("%c == %c\n", str[i], str[n - i - 1]);
        if (str[i] != str[n - i - 1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    
    int 


    printf("Count : %d\n", check_palindrome("abcdba"));

    return 0;
}
