#include <stdio.h>

int main()
{

    int n;
    printf("Enter size of arr : ");
    scanf("%d", &n);
    int rev[n], ava = 0;
    printf("Enter number of arr : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &rev[i]);
    }
    printf("\nElement of arr  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
        ava += rev[i];
    }
    printf("\n\n");
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int x = rev[i];
        count[x]++;
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("\n'%d' -> %d", i, count[i]);
    }

    double average = (double)ava / (double)n;
    printf("\n\nAvarage review : %0.1lf", average);

    return 0;
}