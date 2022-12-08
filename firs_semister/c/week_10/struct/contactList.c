#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[150], phone[12];
} Person;
void intputPerson(char *name, char *phone);
void printStruct(Person *persons, int len)
{
    printf("\n\t***Print Info***\n");
    for (int i = 0; i < len; i++)
    {
        printf("id : %d\n", persons[i].id);
        printf("name : %s\n", persons[i].name);
        printf("phone : %s\n", persons[i].phone);
    }
}
void insertPerson(Person *persons, int len)
{
}
int main()
{
    int len = 5;
    Person persons[len];
    for (int i = 0; i < len; i++)
    {
        persons[i].id = i + 1;
        intputPerson(persons[i].name, persons[i].phone);
    }
    printStruct(persons, len);
    return 0;
}
void intputPerson(char *name, char *phone)
{
    printf("\nEnter the name : ");
    gets(name);
    printf("Enter the phone number : ");
    gets(phone);
}