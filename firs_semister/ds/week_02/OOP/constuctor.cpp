#include <iostream>
using namespace std;

class Example
{
    // public:
    //     int x, y, z;
    //     Example(int a, int b, int c)
    //     {
    //         x = a;
    //         y = b;
    //         z = c;
    //     }
private:
    int a;
    int pass;

public:
    Example(int p)
    {
        pass = p;
    }
    void setter(int x, int p)
    {
        if (pass == p)
        {
            a = x;
        }
        else
        {
            cout << "password not match" << endl;
        }
    }
    int getter(int p)
    {
        if (pass == p)
        {
            return a;
        }
        else
        {
            cout << "password not match" << endl;
        }
        return 0;
    }
};

int main()
{
    // Example a(10, 20, 30);
    // cout << "x: " << a.x << endl;
    // cout << "y: " << a.y << endl;
    // cout << "z: " << a.z << endl;
    Example a(123);
    a.setter(10, 123);
    cout << a.getter(123) << endl;
    return 0;
}