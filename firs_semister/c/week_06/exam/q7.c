#include <stdbool.h>
#include <stdio.h>
bool is_reverese_sorted(int arr[], int n)
{
    bool result = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            result = false;
        }
    }
    return result;
}
int main()
{
    int a[] = {6, 4, 3, 1};
    bool result = is_reverese_sorted(a, 4);
    printf("%s", result ? "True" : "False");
    return 0;
}