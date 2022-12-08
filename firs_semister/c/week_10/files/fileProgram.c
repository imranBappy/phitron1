#include <stdio.h>
int main()
{

    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("\nFile Not Found\n");
    }
    FILE *outputFile = fopen("output.txt", "w");
    int n;
    int sum = 0;
    fscanf(inputFile, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    fprintf(outputFile, "sum -> %d\n", sum);
    printf("Done!\n");
    return 0;
}