#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World";
    // string::reverse_iterator it;
    // for (it = str.begin(); it != str.end(); it++)
    // for (it = str.rbegin(); it != str.rend(); it++)
    // for (auto it = str.begin(); it != str.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (int it = 0; it < str.length(); it++)
    {
        cout << str[it] << endl;
    }
}