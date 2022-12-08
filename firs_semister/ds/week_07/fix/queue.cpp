#include "Queue.h"
#include <bits/stdc++.h>
using namespace std;
// class Queue
// {
// public:
//     int font = -1;
//     int rear = -1;
//     int n = 5;

//     // private:
//     int arr[5];

// public:
//     void enqueue(int data)
//     {
//         if (font == -1)
//         {
//             font++; // increment
//             rear++; // increment
//             arr[font] = data;
//             return;
//         }
//         int s = (rear + 1) % n;
//         if (s != font)
//         {
//             arr[s] = data;
//             rear = s;
//         }
//         else
//             cout << "Queue is Overflow" << endl;
//     }
//     int dequeue()
//     {
//         int return_value;
//         if (arr[font] == 0 && font == rear)
//         {
//             cout << "Queue is Underflow" << endl;
//             return -1;
//         }
//         else
//         {
//             return_value = arr[font];
//         }
//         if (font != rear)
//         {
//             font = (font + 1) % n;
//         }
//         else
//         {
//             arr[font] = 0;
//         }
//         return return_value;
//     }
// };
int main()
{

    /*
    Show the status of a QUEUE for the following operations, where the QUEUE is implemented by an array of size, m=3. Here, Enqueue and Dequeue mean insert and delete respectively, and x=9,, y=x+3, z=x+y, and p=y+z.									5
    Enqueue(z), Enqueue(p), Dequeue(), Enqueue(y), Enqueue(z)

    */
    Queue<int> q;
    int x = 9, y = x + 3, z = x + y, p = y;
    // q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    // q.enqueue(50);
    // q.enqueue(60);
    cout << "x : " << x << "\ny : " << y << "\nz : " << z << "\np : " << p << endl;
    q.push(z);
    q.print();
    q.push(p);
    q.print();
    q.pop();
    q.print();
    q.push(y);
    q.print();
    q.push(z);
    q.print();

    // cout << q.dequeue() << endl;

    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;

    return 0;
}