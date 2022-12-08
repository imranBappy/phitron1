#include <bits/stdc++.h>
using namespace std;
// class
template <class T>
class Node
{
public:
    T data;
    Node()
    {
        // cout << typeid(T).name() << endl;
        // cout << "hello" << endl;
        // this->data = NULL;
    }
    Node(T data)
    {
        this->data = data;
    }
};
class Person
{
public:
    string name;
    int age;
    Person()
    {
        this->name = "";
        this->age = 0;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    // Node<int> *node = new Node<int>();
    Node<Person> node;
    cout << node.data.age << endl;
    // int data = node->data;
    // cout << node->data << endl;

    return 0;
}