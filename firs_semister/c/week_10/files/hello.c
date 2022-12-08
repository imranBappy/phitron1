#include <stdio.h>
#include <stdlib.h>
// gcc hello.c -o hello && ./hello < input.txt  > output.txt
int main()
{
    
    FILE *inputFile;

    int n = 5;
    int sum = 0;
    int arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum -> %d\n", sum);
    return 0;
}