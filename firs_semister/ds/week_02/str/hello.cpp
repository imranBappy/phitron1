#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string str(10, 'x');
    // cout << str << endl;
    // cout << "cap : " << str.capacity() << endl;
    // str = "Imran Hossen Bappy";
    // cout << "cap : " << str.capacity() << endl;
    // str = "Imran Hossen Bappy, I am programmer.";
    // cout << "cap : " << str.capacity() << endl;
    // cout << str << endl;
    // cout << "Max size : " << str.max_size() << endl;
    string s1 = "Hello ";
    string s2 = "World";
    s2 = s1 + s2;
    bool x = s2 == "Hello World";
    cout << x << endl;
}