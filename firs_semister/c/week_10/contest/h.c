#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *A, int n)
{
    int i, j;
    char temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    char arr[51];
    char str[100];
    gets(str);
    int n = 0;
    for (int i = 0; i < strlen(str); i += 2)
    {
        arr[n] = str[i];
        n++;
    }

    sort(arr, n);
    for (int j = 0; j < n - 1; j++)
    {
        printf("%c+", arr[j]);
    }
    printf("%c", arr[n - 1]);
    return 0;
}