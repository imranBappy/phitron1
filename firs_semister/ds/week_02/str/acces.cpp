#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "hello world";
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;

    return 0;
}