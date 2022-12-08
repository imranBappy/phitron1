#include <bits/stdc++.h>
using namespace std;

/*

"For improving performance in competitive programming ,
you have to practice a lot of problems"
Avishek took the above advice very seriously and decided to set a target for himself.
-Avishek decides to solve at least 10 problems every week for 4 weeks.
Given the number of problems he actually solved in each week over 4 weeks as P_1, P_2, P_3,P 1 ​ ,P 2 ​ ,P 3 ​ , and P_4P 4 ​ , output the number of weeks in which Avishek met his target.
*/

int main()
{
    int solved;
    int target = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> solved;
        if (solved >= 10)
            target++;
    }
    cout << target << endl;
    return 0;
}