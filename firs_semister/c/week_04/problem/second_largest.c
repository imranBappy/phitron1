#include <stdio.h>

int main()
{
    int nums[10] = {0,
                    1,
                    2,
                    3,
                    10,
                    4,
                    9,
                    5,
                    6,
                    7};

    int largest = 0;
    int inx = -1;

    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            inx = i;
        }
    }
    nums[inx] = 0;
    largest = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    printf("Second Largest num : %d\n", largest);
    return 0;
}