#include <stdio.h>
void bar(void)
{
    printf("bar\n");
}
void foo(void)
{
    printf("foo\n");
    bar();
}
void main(void)
{
    foo();
}