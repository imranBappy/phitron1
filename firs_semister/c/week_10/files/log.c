#include <stdio.h>

int main()
{
    char outName[] = "log.txt";
    char inName[] = "input.txt";
    FILE *output = fopen(outName, "a");
    FILE *input = fopen(inName, "r");
    if (input == NULL)
    {
        fprintf(output, "%s not found at 10:20 AM\n", inName);
        return 1;
    }
    fprintf(output, "File Error at : 1:20 AM\n");
    fclose(input);
    fclose(output);

    return 0;
}