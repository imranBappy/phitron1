// output
//  10  20  10
//  30  20  30
//  50  10  50
//  50  10  10
//  20  100  100

int a = 10;
int b = 20;
int *p = &a;

printf("% d % d % d\n", a, b, *p); //  10  20  10
*p = 30;

printf("% d % d % d\n", a, b, *p); //  30  20  30
*p = 20;

a = 50;
b = 10;
printf("% d % d % d\n", a, b, *p); //  50  10  50

p = &b;
printf("% d % d % d\n", a, b, *p); //  50  10  10

a = 20;
b = 100;
printf("% d % d % d\n", a, b, *p); //  20  100  100


