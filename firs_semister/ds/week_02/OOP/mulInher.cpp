#include <iostream>
#include <string>
using namespace std;
class MyClass1
{
public:
    string name1 = "MyClass1";
    void sayHello1()
    {
        cout << "Hello 1";
    }
};

class MyClass2
{
public:
    string name2 = "MyClass2";
    void sayHello2()
    {
        cout << "Hello 2";
    }
};

class MyClass3
{
public:
    string name3 = "MyClass3";
    void sayHello3()
    {
        cout << "Hello 3";
    }

protected:
    int pass = 123;
};

class Main : public MyClass1, public MyClass2, public MyClass3
{
public:
    void showPass()
    {
        cout << endl
             << "password : " << pass << endl;
    }
};

int main()
{
    Main m;

    cout << m.name2 << endl;
    m.sayHello1();
    m.sayHello2();
    m.sayHello3();
    m.showPass();
    return 0;
}