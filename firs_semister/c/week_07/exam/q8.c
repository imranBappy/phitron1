#include <stdio.h>

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

int main()
{

    char b1[100], b2[100];
    int l = 10, r = 2;
    toBinary(l, b1);
    toBinary(r, b2);
    printf("int l = %d\tbinary = %s\n", l, b1);
    printf("int r = %d\tbinary = %s\n", r, b2);
    unsigned int xorInt = l ^ r;
    char andBinary[100];
    toBinary(xorInt, andBinary);
    printf("int xor = %d\tbinary = %s\n", xorInt, andBinary);

    return 0;
}