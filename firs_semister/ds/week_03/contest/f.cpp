#include <bits/stdc++.h>
using namespace std;

/*

Recently, Little Liam has bought three paint brushes. The color of the one he bought two days ago is aa, the color of the one he bought yesterday is bb, and the color of the one he bought today is cc. Here, the color of each paint can is represented by an integer between 11 and 100100, inclusive.

Since he is forgetful, he might have bought more than one paint brush in the same color. Count the number of different kinds of colors of these paint brushes and tell him.

*/

int main()
{

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] != arr[j])
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "1\n";
        return 0;
    }

    cout << count << endl;

    return 0;
}