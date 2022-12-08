#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d ", &n);
    char str[n];
    gets(str);
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int size = strlen(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int x = (int)a[i] - 32;
            int xx = (int)str[j];
            if (65 <= str[i] && str[i] <= 90)
            {
                if (str[i] == a[j])
                {
                    a[j] = '0';
                    break;
                }
            }
            else if (97 <= str[i] && str[i] <= 122)
            {
                if (str[i] - 32 == a[j])
                {
                    a[j] = '0';
                    break;
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == '0')
        {
            count++;
        }
    }
    if (count == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
// 122
// 97