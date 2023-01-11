#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string str)
{
    int n = str.size();
    if (str == "" || n == 1)
        return true;
    string small_str = str.substr(1, n - 2);
    return is_palindrome(small_str) && (str[0] == str[n - 1]);
}
int main()
{
    if (is_palindrome("OSSO"))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}