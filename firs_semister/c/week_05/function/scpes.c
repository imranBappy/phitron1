#include <stdio.h>
int main()
{
    int x = 100;
    void hello()
    {
        x += 1;
        printf("%d\n", x);
    }
    hello();
    hello();

    hello();
    hello();
    hello();

    printf("Hello World");
    return 0;
}