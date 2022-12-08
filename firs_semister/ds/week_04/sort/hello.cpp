#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 4, 5, 5, 6, 10};

    int freq[8] = {0};

    for (int i = 0; i < 8; i++)

    {

        freq[arr[i]]++;
    }

    for (int i = 0; i < 8; i++)

    {

        cout << freq[arr[i]] << " ";
    }

    return 0;
}