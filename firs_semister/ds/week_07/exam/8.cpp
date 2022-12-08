#include "my_stl.h"
#include <bits/stdc++.h>
using namespace std;
/*
Show the status of a STACK implemented by a linear linked list for the operations given below. Here, x= Last day of your birthday + 5, y=x+3, and z=y+x.	1.4*7=10

Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()


*/

int main()
{
    // Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()

    //

    int x = 5, y = x + 3, z = y + x;

    Stack<int> s;
    /*

    Push(x + y);
        stack : 13,
    Push(y + z);
        stack : 13, 21,
    Pop();
        stack : 13,
    Push(y * z);
        stack : 13, 104,
    Push(x * y);
        stack : 13, 104, 40,
    Pop();
        stack : 13, 104,
    Pop();
        stack : 13,

    */

    return 0;
}