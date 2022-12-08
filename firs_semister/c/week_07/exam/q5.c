#include <stdio.h>
#include <string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    char name[100];
    int roll;
    int class;
    struct Date dob;
};

int main()
{
    struct Student s1 = {"Imran", 12, 10, (struct Date){2, 5, 2022}};

    strcpy(s1.name, "Imran Hossen Bappy");
    s1.roll = 1;
    s1.class = 12;
    s1.dob = (struct Date){4, 5, 2022};
    printf("name = %s\n", s1.name);
    printf("roll = %d\n", s1.roll);
    printf("roll = %d\n", s1.class);
    printf("Date = %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}