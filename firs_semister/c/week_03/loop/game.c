#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int hidden;
    srand(time(NULL));
    hidden = rand() % 100 + 1;
    int count = 0;
    while (1)
    {
        int guess;
        printf("Please guess number : ");
        scanf("%d", &guess);
        if (guess == hidden)
        {
            printf("You are right!\n");
            break;
        }
        if (guess < hidden)
        {
            printf("Guess smaller!\n");
        }
        else
        {
            printf("Guess larger!\n");
        }
        if (count == 10)
        {
            printf("\nUser field!\n");
            break;
        }
        count++;
    }

    return 0;
}