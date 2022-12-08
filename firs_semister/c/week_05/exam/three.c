#include <stdio.h>
int findGCD(int num, int num2)
{
    int reminder;
    while (num2 > 1)
    {
        reminder = num % num2;
        num = num2;
        num2 = reminder;
    }
    return num;
}
int main()
{
    printf("GCD = %d \n", findGCD(60, 24));
}