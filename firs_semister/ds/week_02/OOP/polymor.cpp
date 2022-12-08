#include <iostream>
using namespace std;
/*
    overloading: function name same fun function preramiter deferent
    overiding: same name and same preramiter function jut ekta ar ekta methon ke overide korbe

*/
class Example
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    int add(int a)
    {
        return a + a;
    }
};
int main()
{
    Example ex;
    cout << ex.add(10, 10) << endl;
    cout << ex.add(5.7, 4.5) << endl;
    cout << ex.add(2) << endl;

    return 0;
}