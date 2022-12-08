#include <stdio.h>

struct Student
{
    int roll, class, marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student s1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s1[i].roll);
        scanf("%d", &s1[i].class);
        scanf("%d", &s1[i].marks);
    }

    int total_marks = 0;
    for (int i = 0; i < n; i++)
    {
        total_marks = total_marks + s1[i].marks;
    }
    printf("total mark : %d\n", total_marks);
    return 0;
}