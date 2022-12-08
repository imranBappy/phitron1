#include <stdio.h>
void sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
    }
}

int main()
{

    int a[] = {8, 2, 9, 4, 5, 6, 7, 1, 3};
    sort(9, a);
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}

/*

Suppose int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}. Suppose the address of
a[0] is at 6000. Find the value of the following -
a. a[8] // value = 9
b. &a[5] // address = 6020 value = 6
c. a // address = 6000
d. a+4 // address = 6016 value = 5
e. *(a+2) value = 3;
f. &*(a+4)// address = 6016 value = 5


*/