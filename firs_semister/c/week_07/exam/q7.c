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
    out[index] = '\0';
    for (int i = 0; i < index / 2; i++)
    {
        char temp = out[i];
        out[i] = out[index - 1 - i];
        out[index - 1 - i] = temp;
    }
}

int main()
{
    char out[1000];
    toBinary(23, out);
    printf("Binary = %s\n", out);
    return 0;
}