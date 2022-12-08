

// memori address change
// pointer in variable

#include <stdio.h>
int main()

{
    char str = 'A';

    const char *const ptr;
    ptr = &str;
    *ptr = 'X';
    printf("%c", *ptr);

    return 0;
}
// int main()

// {

//     // char c = 'A';
//     // char *p, **q;
//     // p = &c;
//     // q = &p;
//     // **q = 'X';
//     char c = 'A';
//     char *p, **q, ***w;
//     p = &c;
//     q = &p;
//     w = &q;

//     printf("Value of c : %c\t address : %p\n", c, &c);
//     printf("Value of *p : %c\t address : %p\n", *p, p);
//     printf("Value of **p : %c\t address : %p\n", **q, q);
//     printf("Value of ***w : %c\t address : %p\n", ***w, w);

//     return 0;
// }