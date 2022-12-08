#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date date1 = {30, 5, 2022};
    date1.day = 30;
    date1.month = 5;
    date1.year = 1223;
    printf("%d-%d-%d", date1.day, date1.month, date1.year);
    
    return 0;
}