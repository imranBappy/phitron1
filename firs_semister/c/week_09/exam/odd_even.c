#include <stdio.h>
void odd_even(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
}
int main()
{

    odd_even(23);

    return 0;
}