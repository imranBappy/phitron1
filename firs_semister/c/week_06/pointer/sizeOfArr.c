#include <stdio.h>

void length(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nsize of arr = %d", sizeof(arr));
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    length(arr);
    return 0;
}