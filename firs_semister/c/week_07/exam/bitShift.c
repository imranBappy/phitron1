
#include <stdio.h>
#include <string.h>
void toBinary(int decimal, char out[])
{
    int index = 0;
    while (decimal)
    {
        out[index] = '0' + decimal % 2;
        decimal /= 2;
        index++;
    }
    while (index < 8)
    {
        out[index] = '0';
        index++;
    }
    for (int i = 0; i < index / 2; i++)
    {
        char temp = out[i];
        out[i] = out[index - 1 - i];
        out[index - 1 - i] = temp;
    }
    out[index] = '\0';
}
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
int main()
{

    unsigned int x = binaryToInt("11011100");
    // unsigned int x = 10;

    char xb[100], lsb[100];
    int shift = 2;
    int ls = x << shift;
    // // ls = x >> 1;
    toBinary(x, xb);
    toBinary(ls, lsb);
    printf("x = %d\tbinary = %s\n", x, xb);
    printf("ls = %d\tbinary = %s\n", ls, lsb);

    char xx[100];
    for (int i = 0; i < strlen(lsb); i++)
    {
        char c = lsb[shift + i];
        // xx[i] = c;
        printf("%c", c);
    }
    // printf("binary = %s\n", xx);

    return 0;
}
/*
// Left Shift <<
    00001010
    00010100

// Right Shift >>
    00001010
    00000101

    1101110000

*/