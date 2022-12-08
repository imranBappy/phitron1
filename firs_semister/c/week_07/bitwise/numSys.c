#include <stdio.h>
#include <string.h>
unsigned int binaryToInt(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;
    for (int i = len - 1, p = 1; i != -1; i--, p *= 2)
    {
        if (str[i] == '1')
        {
            ans += p;
        }
    }
    return ans;
}
void toBinary(int decimal, int bit, char binary[])
{
    int len = 0;
    while (decimal > 0)
    {
        int bit = decimal % 2;
        decimal = decimal / 2;
        binary[len] = '0' + bit;
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
    int bit = 8;
    char binary[bit];
    toBinary(0, bit, binary);
    printf("Binary = %s\n", binary);
    printf("Decimal = %d\n", binaryToInt(binary));
    return 0;
}