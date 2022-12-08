#include <bits/stdc++.h>
using namespace std;

int totCount;
int firstCount;

// Function to get the total count
void getTotCount(int num)
{
    totCount = 1;
    firstCount = 1;
    int temp = 1;

    // Moving until we get
    // the rightmost set bit
    while ((num & temp) == 0)
    {
        temp = temp << 1;
        totCount += 1;
    }

    firstCount = totCount;
    temp = num >> totCount;

    // To get total number
    // of bits in a number
    while (temp != 0)
    {
        totCount += 1;
        temp = temp >> 1;
    }
}

// Function to find the integer formed
// after flipping all bits to the left
// of the rightmost set bit
int flipBitsFromRightMostSetBit(int num)
{

    // Find the total count of bits and
    // the rightmost set bit
    getTotCount(num);
    // XOR given number with the
    // number which has is made up
    // of only totbits set
    int num1 = num ^ ((1 << totCount) - 1);

    // To avoid flipping the bits
    // to the right of the set bit,
    // take XOR with the number
    // made up of only set firstbits
    num1 = num1 ^ ((1 << firstCount) - 1);

    return num1;
}

// Driver Code
int main()
{
    int n = 120;

    cout << flipBitsFromRightMostSetBit(n)
         << endl;

    return 0;
}