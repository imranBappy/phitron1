#include <iostream>
using namespace std;

class Parant
{
private:
    int taka;

protected:
    int pss;

public:
    Parant(int tk, int p)
    {
        taka = tk;
        pss = p;
    }
    friend class AbburFriend;
    friend void tellSecret(Parant *x);
};
class AbburFriend
{
public:
    Parant *pt;
    AbburFriend(Parant *p)
    {
        pt = p;
    }
    void tellSecret()
    {
        cout << (*pt).taka << endl;
    }
    void tellPass()
    {
        cout << pt->pss << endl;
    }
};

void tellSecret(Parant *p)
{
    cout << (*p).taka << endl;
}

int main()
{
    Parant pt(199, 123);
    // AbburFriend ab(&pt);
    // ab.tellSecret();
    // ab.tellPass();
    tellSecret(&pt);
    return 0;
}