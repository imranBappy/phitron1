#include <stdio.h>
void swap_pass_by_value(int a, int b);
void swap_pass_by_reference(int *a, int *b);
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    swap_pass_by_value(arr[0], arr[1]);       // output:  int arr[] = {1, 2, 3, 4, 5};
    swap_pass_by_reference(&arr[0], &arr[1]); // output:  int arr[] = {2, 1, 3 ,4, 5}
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap_pass_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_pass_by_reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
    When will pass value then I will get just value and nothing else?
    that "variable" I will not change the value

 When I will reference (pointer or address) then I will access that "variable". and
    I will change the value by reference
*/
