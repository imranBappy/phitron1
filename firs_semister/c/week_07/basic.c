#include <stdio.h>
#include <string.h>
struct Person
{
    char name[200];
    int age;
};
int main()
{

    struct Person user1, user2;
    char c;

    printf("Enter name : ");
    gets(user1.name);
    printf("Enter age : ");
    scanf("%d", &user1.age);

    printf("\nEnter Name : ");
    getchar();
    gets(user2.name);
    printf("Enter Age : ");
    scanf("%d", &user2.age);

    printf("\n\n***User Info***\n");
    printf("\nName : %s", user1.name);
    printf("\nAge : %d\n", user1.age);

    printf("\nName : %s", user2.name);
    printf("\nAge : %d\n", user2.age);
    return 0;
}
