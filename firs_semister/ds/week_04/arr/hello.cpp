#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *elementPointer = arr;
    elementPointer+=4;
    printf("%d", *elementPointer);
    return 0;
}