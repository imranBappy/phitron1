#include <stdio.h>
int area_of_rectangle(int hight, int width);
int main()
{
    int result = area_of_rectangle(10, 10);
    printf("Result = %d\n", result);
    return 0;
}
int area_of_rectangle(int hight, int width)
{
    return hight * width;
}