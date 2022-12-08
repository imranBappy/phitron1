#include <stdio.h>
// some change

int main()
{

    int X, result;
    scanf("%d", &X);
    if (X < 40 && 0 <= X)
    {
        result = 40 - X;
        printf("%d", result);
    }
    else if (X < 70 && 40 <= X)
    {
        result = 70 - X;
        printf("%d", result);
    }
    else if (X < 90 && 70 <= X)
    {
        result = 90 - X;
        printf("%d", result);
    }
    else if (X >= 90 && 100 >= X)
    {
        printf("expert");
    }

    return 0;
}