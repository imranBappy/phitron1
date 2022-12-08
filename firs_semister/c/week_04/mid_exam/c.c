#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d ", &n);
    char str[n];
    gets(str);
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
