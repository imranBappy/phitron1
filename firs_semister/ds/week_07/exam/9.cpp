#include <stdio.h>
#include <string.h>
int top = -1;
char Stack[4] = {"\0"};
void Push(char x)
{
    Stack[++top] = x;
    return;
}
char Pop(void)
{
    return Stack[top--];
}
int main()
{
    char Str1[4] = {"\0"};  // hare declared the string and initialize it with null character to avoid garbage value in the string. It is length of 4 because we have to store 3 character and 1 null character.
    char Str2[4] = {"\0"};  // hare declared the string and initialize it with null character to avoid garbage value in the string. It is length of 4 because we have to store 3 character and 1 null character.
    int i;                  // hare is the variable for the loop.
    strcpy(Str1, "CSE");    // hare is the string copy function to copy the string.
    for (i = 0; i < 3; ++i) // hare is the loop for the push the string in the stack.
    {
        Push(Str1[i]); // hare is the function call for the push the string in the stack.
    }
    for (i = 0; i < 3; ++i) // hare is the loop for the pop the string from the stack.
    {
        Str2[i] = Pop(); // hare is function call for the pop the string from the stack.
    }
    printf("% s", Str2); // hare is the print the string.
    return 0;
}
