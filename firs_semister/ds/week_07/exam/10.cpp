/*
What are the merits of implementing a QUEUE using Array in a circular fashion? How do you check the underflow and overflow in the QUEUE implemented circularly
*/
/*


The merits of implementing a QUEUE using Array in a circular fashion is that it is a linear data structure and it is a FIFO data structure.
And It is completely of Enqueue and Dequeue operations 0(1)

underflow Check : arr[font] == 0 && font == rear

overflow Check : (rear + 1) % n == font

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int front = 0, rear = n - 1;
    int count = 0;
    while (front <= rear)
    {
        if (a[front] == a[rear])
        {
            count++;
            front++;
            rear--;
        }
        else
        {
            break;
        }
    }
    if (count == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}