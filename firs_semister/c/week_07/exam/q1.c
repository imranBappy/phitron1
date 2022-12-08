#include <stdio.h>
struct Time
{
    int hour, minute, second;
};
struct Time timeFormate(int hour, int minute, int second, int format)
{
    // format 1 == AM, 0 == PM
    if (format)
    {
        return (struct Time){hour, minute, second};
    }
    return (struct Time){12 + hour, minute, second};
}
int main()
{
    struct Time time = timeFormate(9, 15, 10, 0);
    printf("%d-%d-%d\n", time.hour, time.minute, time.second);
    return 0;
}