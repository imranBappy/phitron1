#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    unsigned int sum,missing, a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> sum >> a >> b >> c;
        missing = sum - (a + b + c);
        printf("%d\n",missing );
    }
  
    return 0;
}
