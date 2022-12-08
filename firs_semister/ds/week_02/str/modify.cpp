#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "hello world";
    string s1 = " XXX";
    // s += s1;
    // s.append(" ABX");
    // s.push_back('0');
    // s.pop_back();
    // s.insert(6, "Imran and ");
    // s.erase(5, 1);
    cout << s << endl;
    cout << s1 << endl;
    swap(s, s1);
    cout << s << endl;
    cout << s1 << endl;
    // s.assign("abc");
    // cout << s << endl;

    return 0;
}