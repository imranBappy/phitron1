#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct User
{
    char name[200];
    int _id;
    struct Date _date;
};
void printDate(struct Date date);
void printUser(struct User users[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    struct User users[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        char s[200];
        gets(s);
        strcpy(users[i].name, s);
        users[i]._id = i + 1;
        users[i]._date.year = 2022;
        users[i]._date.month = 5;
        users[i]._date.day = i + 2;
    }
    printUser(users, n);
    char name[200];
    printf("\nEnter the for search : ");
    gets(name);

    for (int i = 0; i < n; i++)
    {
        if (!strcmp(name, users[i].name))
        {
            printDate(users[i]._date);
            printf("Name : %s\n", users[i].name);
            printf("id : %d\n", users[i]._id);
            return 0;
        }
    }
    printf("Not Found!");
    return 0;
}
void printUser(struct User users[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printDate(users[i]._date);
        printf("id : %d\n", users[i]._id);
        printf("Name : %s\n", users[i].name);
        printf("\n");
    }
}
void printDate(struct Date date)
{
    printf("Date : %d-%d-%d\n", date.day, date.month, date.year);
}