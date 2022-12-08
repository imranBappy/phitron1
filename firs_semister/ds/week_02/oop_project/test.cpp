#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "Geeks\nfor\nGeeks";

    // Returns first token
    char *token = strtok(str, "\n");
    string xx = token;
    cout << "My xx " << xx << endl;
    printf("%s\n", token);
    token = strtok(NULL, "\n");
    printf("%s\n", token);
    token = strtok(NULL, "\n");
    printf("%s\n", token);

    // while (token != NULL)
    // {
    //     printf("%s\n", token);
    //     token = strtok(NULL, "-");
    // }
    // string s = "Hello";
    // char s1[] = "Hello";

    // cout << s.length() << endl;
    // cout << strlen(s1) << endl;

    return 0;
}