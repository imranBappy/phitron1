#include <stdio.h>
struct Studnet
{
    char name[100];
    int roll;
    int mark;
};
int main()
{
    struct Studnet s1 = {"Imran", .mark = 10, .roll = 100};
    printf("name : %s\n", s1.name);
    printf("roll : %d\n", s1.roll);
    printf("mark : %d\n", s1.mark);

    return 0;
}