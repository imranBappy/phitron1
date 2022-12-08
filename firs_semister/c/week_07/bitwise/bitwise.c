#include <stdio.h>
#include <string.h>
void toBinary(int decimal, int bit, char binary[]);
int main()
{
    int bit = 8;
    char binary[bit];
    // char a, b;
    // a = 0;
    // b = ~a;
    // printf("a = %d, b = %d\n", a, b);

    // a = 1;
    // b = ~a;
    // printf("a = %d, b = %d\n", a, b);
    // toBinary(0, bit, binary);
    // printf("Binary = %s\n", binary);
    int n, x, m;

    while (1)
    {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);
        if (!n)
            break;
        printf("How many bits you want to shift left: ");
        scanf("%d", &x);
        m = n >> x;
        printf("\nResult is = %d\n", m);
    }
    /*
        1101

    */
    // unsigned int binaryToInt(char str[])
    // {
    //     int len = strlen(str);
    //     unsigned int ans = 0;
    //     for (int i = len - 1, p = 1; i != -1; i--, p *= 2)
    //     {
    //         if (str[i] == '1')
    //         {
    //             ans += p;
    //         }
    //     }
    //     return ans;
    // }
    // int num1;
    // int num2;
    // scanf("%d %d", &num1, &num2);
    // int result = num1 << num2;
    // printf("result = %d\n", result);
    return 0;
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