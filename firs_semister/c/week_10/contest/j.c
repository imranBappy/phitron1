#include <stdio.h>
#include <string.h>
/*
3
tanaka taro
sato hanako
tanaka taro


*/
int main()
{

    int n;
    char s[200], t[20];
    scanf("%d ", &n);

    char arr[n][200];

    for (int i = 0; i < n; i++)
    {
        // scanf("%[^\n]", s);
        // scanf("%[^\n]", t);
        // scanf("%s", s);
        // scanf("%s", t);
        gets(s);
        // gets(t);
        // printf("%s\tlen : %d\n", s, strlen(s));
        // strcat(s, t);
        strcpy(arr[i], s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) == 0 && i != j)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");

    return 0;
}