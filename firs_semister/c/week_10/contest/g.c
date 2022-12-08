#include <stdio.h>
#include <string.h>
int main()
{

    int l, s;
    char str[100000];
    scanf("%d %d ", &l, &s);
    gets(str);

    for (int i = l - 1, j = 0; j < ((s - l) / 2) + 1; i++, j++)
    {
        int temp = str[i];
        str[i] = str[s - 1 - j];
        str[s - 1 - j] = temp;
    }
    printf("%s\n", str);
    return 0;
}