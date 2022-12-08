#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int main()
{
    cout << add(10, 5) << endl;
    cout << add(10.3, 5.0);

    return 0;
}