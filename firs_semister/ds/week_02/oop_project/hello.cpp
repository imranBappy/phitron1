#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ofstream MyFile("data.txt");

    // MyFile << "2\n\n";
    // MyFile << "Imran Hossen\nMathbaria,Pirojpur\n20\npass123\n\n";
    // MyFile << "Imran Hossen\nMathbaria,Pirojpur\n20\npass123\n\n";

    // MyFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("data.txt");
    // Use a while loop together with the getline() function to read the file line by line
    getline(MyReadFile, myText);
    cout << "count : ";
    // int x = stoi(myText);
    // cout << x << endl;
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        if (myText.length() > 0)
        {
            cout << "ac :  " << myText;
        }
        {
            cout << endl;
        }
    }

    // Close the file
    MyReadFile.close();
    return 0;
}