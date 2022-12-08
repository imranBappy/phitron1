#include <stdio.h>

int main()
{

    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int current = 0;
    current = arr2[current];
    current = arr2[current];
    current = arr2[current];
    printf("%d\n", current);

    return 0;
}
/**
   0 1 2 3 4 5 6 7 8 9
 * 9 0 1 2 3 4 5 6 7 8


0 1 2 3 4 5 6 7 8 9
4 8 8 8 0 8 8 8 8 8

*/