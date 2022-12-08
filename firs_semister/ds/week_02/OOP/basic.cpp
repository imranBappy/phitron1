#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
};

int main()
{
    Student s1;
    strcpy(s1.name, "Imran Hossen");
    s1.roll = 1;
    cout << s1.name << endl;
    cout << s1.roll << endl;

    return 0;
}
