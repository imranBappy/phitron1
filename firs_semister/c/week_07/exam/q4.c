#include <stdio.h>
struct Inverse
{
    int a;
    int b;
};
struct Inverse reverse(struct Inverse in)
{
    return (struct Inverse){in.b, in.a};
}
int main()
{
    struct Inverse in = reverse((struct Inverse){2, 3});
    printf("%d/%d", in.a, in.b);
    return 0;
}