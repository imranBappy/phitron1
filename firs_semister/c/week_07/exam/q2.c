#include <stdio.h>
struct Time
{
    int hour, minute;
};
struct Interval
{
    struct Time start;
    struct Time end;
};
void timePrinter(int h, int m)
{
    printf("%d-%d-0\n", h, m);
}
int main()
{
    struct Interval interval = {
        (struct Time){7, 10},
        (struct Time){5, 20},
    };
    timePrinter(interval.start.hour, interval.start.minute);
    timePrinter(interval.end.hour, interval.end.minute);
    return 0;
}