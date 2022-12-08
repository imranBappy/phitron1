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
    // char b1[100], b2[100];
    // int a = 10, b = 35;
    // toBinary(a, b1);
    // toBinary(b, b2);

    // printf("int a = %d\tbinary = %s\n", a, b1);
    // printf("int b = %d\tbinary = %s\n", b, b2);
    // unsigned int andInt = a & b;
    // char andBinary[100];
    // toBinary(andInt, andBinary);
    // printf("int and = %d\tbinary = %s\n", andInt, andBinary);
    // or
    // char b1[100], b2[100];
    // int a = 10, b = 2;
    // toBinary(a, b1);
    // toBinary(b, b2);

    // // xor
    // char b1[100], b2[100];
    // int a = 10, b = 2;
    // toBinary(a, b1);
    // toBinary(b, b2);
    // printf("int a = %d\tbinary = %s\n", a, b1);
    // printf("int b = %d\tbinary = %s\n", b, b2);
    // unsigned int orInt = a ^ b;
    // char andBinary[100];
    // toBinary(orInt, andBinary);
    // printf("int xor = %d\tbinary = %s\n", orInt, andBinary);

    // not
    // char b1[100], b2[100];
    // int a = 10, b = 2;
    // toBinary(a, b1);
    // toBinary(b, b2);
    // printf("int a = %d\tbinary = %s\n", a, b1);
    // printf("int b = %d\tbinary = %s\n", b, b2);
    // unsigned int notInt = ~a;
    // char andBinary[100];
    // toBinary(notInt, andBinary);
    // printf("int not = %i\tbinary = %s\n", notInt, andBinary);

    // Lift Shift
    char b1[100], b2[100];
    int a = 10, b = 2;
    toBinary(a, b1);
    toBinary(b, b2);
    printf("int a = %d\tbinary = %s\n", a, b1);
    // printf("int b = %d\tbinary = %s\n", b, b2);
    unsigned int notInt = a >> 10;
    char andBinary[100];
    toBinary(notInt, andBinary);
    printf("int LS = %i\tbinary = %s\n", notInt, andBinary);
    return 0;
}
/*
    and = &
    0 = 0 -> 0
    0 = 1 -> 0
    1 = 0 -> 0
    1 = 1 -> 1

    00001010 = 10
    00000010 = 2
    00000010 = 2

    ____________


    or = |
    0 or 0 -> 0
    0 or 1 -> 1
    1 or 0 -> 1
    1 or 1 -> 1

    00001010 = 10
    00000010 = 2
    00001010 = 2



     xor = ^
    0 xor 0 -> 0
    0 xor 1 -> 1
    1 xor 0 -> 1
    1 xor 1 -> 0

    00001010 = 10
    00000010 = 2
    00001000 = 2

    not ~
    00001010 = 10
    11110101 = 2
*/
