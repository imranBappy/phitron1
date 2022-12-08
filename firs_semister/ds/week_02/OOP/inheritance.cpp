#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string brand;
    void honk()
    {
        cout << "Tuut, tuut!\n";
    }

protected:
    int price = 15000;
};
class Car : public Vehicle
{
public:
    int cc;
    void setPrice(int p)
    {
        price = p;
    }
    void getPrice()
    {
        cout << "price : " << price << endl;
    }
    void honk()
    {
        cout << "Tit, Tit!\n";
    }
};
int main()
{
    Car c1;
    c1.brand = "SUZUKI";
    c1.cc = 150;
    c1.honk();
    cout << "brand : " << c1.brand << endl;
    cout << "cc : " << c1.cc << endl;
    // cout << c1.price << endl;
    c1.setPrice(100);
    c1.getPrice();
    // 
    return 0;
}