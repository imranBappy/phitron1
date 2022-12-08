#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    string name;
    int id;
    User()
    {
        this->name = "";
        this->id = 0;
    }
    User(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

int main()
{
    User **arr = new User *[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = new User("Imran", 10);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]->name << endl;
    }
    return 0;
}