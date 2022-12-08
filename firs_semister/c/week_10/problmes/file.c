#include <stdio.h>

int main()
{
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    int id = 10;
    char output[100];
    fprintf(output, "%d.txt", id);
    return 0;
}