#include <stdbool.h>
#include <stdio.h>
bool check_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int check = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i + 1)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {2, 5, 4, 1, 6, 3};
    bool take = check_array(arr, 6);
    printf("%s\n", take ? "true" : "false");
    return 0;
}