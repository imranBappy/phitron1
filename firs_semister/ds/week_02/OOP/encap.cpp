#include <iostream>
using namespace std;
class Student
{

private:
    int y = 123;

protected:
    int z;

public:
    int x;
    void sayHi()
    {
        cout << "Hi : " << y << endl;
    }
};
int main()
{

    Student s1;
    // s1.x = 10;
    s1.sayHi();
    return 0;
}