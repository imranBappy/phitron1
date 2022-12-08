#include <stdio.h>

int main()
{
    FILE *inputFile;
    inputFile = fopen("output.txt", "r");
    if (inputFile == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    char c;
    char fileName[100];
    int i = 0;
    while (1)
    {
        c = fgetc(inputFile);
        if (c == EOF)
        {
            printf("End\n");
            break;
        }
        fileName[i] = c;
        i++;
    }
    fileName[i] = '\0';
    printf("%s", fileName);
    return 0;
}