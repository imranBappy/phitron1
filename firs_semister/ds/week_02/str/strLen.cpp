#include <iostream>
#include <string>
using namespace std;
int main()
{
    string len = "hello world";
    // cout << len.size() << endl;
    cout << len.length() << endl;
    cout << len.size() << endl;
    len[0] = 'X';
    len.resize(4);
    cout << " is empty " << len.empty() << endl;
    len.clear();
    cout << " is empty " << len.empty() << endl;

    cout << len.length() << endl;
    cout << len.size() << endl;
    cout << len << endl;
    return 0;
}