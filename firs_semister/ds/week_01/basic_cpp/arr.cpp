#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter size of arr : ";
    // cin >> n;
    // int myNum[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> myNum[i];
    // }
    // cout << "Output : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << myNum[i] << endl;
    // }

    int size;
    cout << "Enter size of arr : ";
    cin >> size;
    string arr[size];
    cout << "Enter input item : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Output : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}