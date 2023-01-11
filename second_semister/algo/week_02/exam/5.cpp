#include <bits/stdc++.h>
using namespace std;

string int_to_binary(int decimal)
{
    string binary = "";
    while (decimal > 0)
    {
        if (decimal % 2 == 0)
        {
            binary = '0' + binary;
        }
        else
        {
            binary = '1' + binary;
        }
        decimal /= 2;
    }
    return binary;
}
string int_to_binary2(int decimal)
{
    string binary = "";
    if (decimal <= 0)
        return binary;
    if (decimal % 2 == 0)
        binary = '0' + binary;
    else
        binary = '1' + binary;
    return int_to_binary2(decimal / 2)+ binary ;
}



int main()
{
    int input = 10;
    cout << int_to_binary(input) << endl;
    cout << int_to_binary2(input) << endl;
    // cout << binary << endl;

    return 0;
}