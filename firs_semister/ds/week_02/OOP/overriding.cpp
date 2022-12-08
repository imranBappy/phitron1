#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void animalSound()
    {
        cout << "Ha Ha Ha!\n";
    }
};
class Cat : public Animal
{
public:
    int speed = 12;
    void animalSound()
    {
        cout << "Mew Mew Mew!\n";
    }
};
class Cow : public Animal
{
public:
    int speed = 12;
    void animalSound()
    {
        cout << "Hamba Hamba!\n";
    }
};

int main()
{

    Cat c1;
    Cow cw1;

    c1.speed = 10;
    c1.animalSound();
    cw1.animalSound();

    return 0;
}