// C++ program to delete elements from array.
#include <bits/stdc++.h>
using namespace std;

// Function for deleting k elements
void deleteElements(int arr[], int n, int k)
{
    // Create a stack and push arr[0]
    stack<int> s;
    s.push(arr[0]);

    int count = 0;

    // traversing a loop from i = 1 to n
    for (int i = 1; i < n; i++)
    {

        // condition for deleting an element
        while (!s.empty() && s.top() < arr[i] && count < k)
        {
            s.pop();
            count++;
        }

        s.push(arr[i]);
    }

    // Putting elements of stack in a vector
    // from end to begin.
    int m = s.size();
    vector<int> v(m); // Size of vector is m
    while (!s.empty())
    {

        // push element from stack to vector v
        v[--m] = s.top();
        s.pop();
    }

    // printing result
    for (auto x : v)
        cout << x << " ";

    cout << endl;
}

// Driver code
int main()
{
    int n = 5, k = 2;
    int arr[] = {20, 10, 25, 30, 40};
    deleteElements(arr, n, k);
    return 0;
}
