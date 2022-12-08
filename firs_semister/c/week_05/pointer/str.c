#include <stdio.h>

int main()
{

    char s[] = "Bangladesh";
    printf("Name of our country : %s \n", s);
    printf("Address of s : %p\n", s);
    printf("Address of s : %p\n", &s[0]);
    // printf("Address of s : %p\n", &s[1]);
    // printf("Address of s : %p\n", &s[2]);
    // printf("Address of s : %p\n", &s[3]);
    // printf("Address of s : %p\n", &s[4]);
    char *p;
    p = s;

    printf("Name : %s\n", p);
    return 0;
}