#include "stack_by_linkedlist.h"
#include <bits/stdc++.h>
using namespace std;
class Person
{
    int idls;
    double balance;
    string name;

public:
    Person()
    {
        this->id = -1;
        this->balance = -1.0;
        this->name = "";
    }
    Person(double balance, string name)
    {
        srand(time(0));
        this->id = rand() * rand();
        this->balance = balance;
        this->name = name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setName(double balance)
    {
        this->balance = balance;
    }
    string getName()
    {
        return this->name;
    }
    int getId()
    {
        return this->id;
    }
    int getBalance()
    {
        return this->balance;
    }
    void print()
    {
        cout << "{\n    id : " << this->id << ",\n    name : " << this->name << ",\n    balance : " << this->balance << "\n}";
        printf("\n");
    }
};
int main()
{
    Stack<Person> stack;
    stack.push(Person(100.1, "Imran Hoosen"));
    stack.push(Person(123.12, "Rakibul Islam"));
    printf("size : %d\n", stack.size());
    while (!stack.isEmpty())
    {
        stack.Top().print();
     
        stack.pop();
    }
    printf("size : %d\n", stack.size());
    // Person p = stack.pop();
    // cout << p.getName();
    // p.print();
    // cout << "Is empty stack : " << stack.isEmpty() << "\tLength : " << stack.length << endl;
    return 0;
}