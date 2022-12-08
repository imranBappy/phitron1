#include <stdio.h>
#include <string.h>
void toBinary(int decimal, int bit, char binary[])
{
    int len = 0;
    while (decimal > 0)
    {
        int digit = decimal % 2;
        decimal = decimal / 2;
        binary[len] = '0' + digit;
        len++;
    }

    for (int i = strlen(binary); strlen(binary) < bit; i++)
    {
        binary[len] = '0';
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        int temp = binary[i];
        binary[i] = binary[len - 1 - i];
        binary[len - 1 - i] = temp;
    }
    binary[len] = '\0';
}
int main()
{

    char x = 1, xOut[100];
    toBinary(x, 8, xOut);
    printf("%s, x = %d\n", xOut, x);
    char a = ~x, aOut[100];
    toBinary(a, 8, aOut);
    printf("%s, a = %d\n", aOut, a);

    return 0;
}