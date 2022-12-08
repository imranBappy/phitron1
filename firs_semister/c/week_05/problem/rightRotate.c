#include <stdio.h>

int main()
{
    // 2, 3, 4, 5, 1
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;
    int newArr[5];
    for (int i = 0, j = 0; i < len; i += 2, j++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (i == 0)
        {
            if (len != i + 1)
            {
                newArr[j] = b;
            }
            newArr[len - 1 - j] = a;
        }
        else
        {
            if (len == i + 1)
            {
                newArr[j] = b;
                newArr[len - 1 - j] = a;
            }
            else
            {
                newArr[j] = a;
                newArr[len - 1 - j] = b;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", newArr[i]);
    }

    return 0;
}

/*
    [1, 2, 3, 4, 5]
    [2, 3, 4, 5, 1]

    [2, 0, 0, 0, 1]

    int newArr[];
    int len = 5;
    step 1 : int i = 0, j = 0; i < len, i +=2, j++:
            int a = arr[j];
            if(len != i +1 ){
                arr[j] = b
                int b = arr[j + 1];
            }
            arr[len - 1 - j] = a;


*/