#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int rear = 0;
    int font = -1;
    int size = 3;
    int arr[3];
    void enqueue(int data)
    {
        if (rear == font)
        {
            printf("Queue is overflow!\n");
            return;
        }
        arr[rear] = data;
        if (font == -1)
            font = 0;
        rear++;
        if (rear == size)
            rear = 0;
    }
    int dequeue()
    {
        if (font == -1)
        {
            printf("Queue is underflow!\n");
            return font;
        }
        int data = arr[font];
        font++;
        if (rear == 0 && font == size)
            font = -1;
        else if (font == size)
            font = 0;
        else if (font == rear)
        {
            font = -1;
            rear = 0;
        }

        return data;
    }
    bool isEmpty()
    {
        if (rear == 0 && font == -1)
            return true;
        return false;
    }
   
};

int main()
{

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.queueDisplay();

    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;

    // q.enqueue(00);
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;

    // q.enqueue(100);
    // q.enqueue(200);
    // q.enqueue(300);

    // cout << q.dequeue() << endl;

    return 0;
}