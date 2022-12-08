#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    int mark;
    char name[150];
} Person;
void intputPerson(char *name, int *mark, int id);
char *makeDBName(int id)
{
    FILE *outputFile;
    FILE *inputFile;
    char c;
    char *fileName = (char *)malloc(150);
    int i = 0;
    outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "./database/%d.txt", id);
    fclose(outputFile);
    inputFile = fopen("output.txt", "r");
    if (inputFile == NULL)
    {
        printf("File not found\n");
        return fileName;
    }
    while (1)
    {
        c = fgetc(inputFile);
        if (c == EOF)
        {
            break;
        }
        fileName[i] = c;

        i++;
    }
    fileName[i] = '\0';
    fclose(inputFile);
    return fileName;
}
void printStruct(Person *persons, int len)
{
    printf("\n\t***Print Info***\n");
    for (int i = 0; i < len; i++)
    {
        printf("Id : %d\n", persons[i].id);
        printf("Name : %s\n", persons[i].name);
        printf("Mark : %d\n", persons[i].mark);
    }
}
void insertPerson(Person *persons, int len)
{
}
int main()
{
    int len = 5;
    printf("Enter number of total students : ");
    scanf("%d", &len);
    getchar();
    Person persons[len];
    FILE *sDatabase;
    for (int i = 0; i < len; i++)
    {
        persons[i].id = i + 1;
        intputPerson(persons[i].name, &persons[i].mark, persons[i].id);
        sDatabase = fopen(makeDBName(persons[i].id), "a");
        fprintf(sDatabase, "%d\n", persons[i].id);
        fprintf(sDatabase, "%s\n", persons[i].name);
        fprintf(sDatabase, "%d\n", persons[i].mark);
    }
    // printStruct(persons, len);
    return 0;
}
void intputPerson(char *name, int *mark, int id)
{
    printf("\nEnter the name : ");
    gets(name);
    printf("Enter the mark : ");
    scanf("%d", mark);
    getchar();
}