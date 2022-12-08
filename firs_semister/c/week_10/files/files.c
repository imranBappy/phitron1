#include <stdio.h>

int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    FILE *outputFile = fopen("output.txt", "w");
    char c;
    while (1)
    {
        c = fgetc(inputFile);
        if (c == EOF)
        {
            printf("\nEnd\n");
            break;
        }
        fputc(c, outputFile);
    }

    return 0;
}