// C++ program to implement a queue using an array
#include <bits/stdc++.h>
using namespace std;
/*
 Enqueue(z) : 21
 Enqueue(p) : 21 <-  33
 Dequeue() :  33 <-
 Enqueue(y) : 33 <-  12
 Enqueue(z) : 33 <-  12 <-  21

*/
struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    ~Queue() { delete[] queue; }

    // function to insert an element
    // at the rear of the queue
    void Enqueue(int data)
    {
        // check queue is full or not
        if (capacity == rear)
        {
            printf("\nQueue is full\n");
            return;
        }

        // insert element at the rear
        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    // function to delete an element
    // from the front of the queue
    void Dequeue()
    {
        // if queue is empty
        if (front == rear)
        {
            printf("\nQueue is empty\n");
            return;
        }

        // shift all the elements from index 2 till rear
        // to the left by one
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

            // decrement rear
            rear--;
        }
        return;
    }

    // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            printf("\nQueue is Empty\n");
            return;
        }

        // traverse front to rear and print elements
        for (i = front; i < rear; i++)
        {
            printf(" %d <- ", queue[i]);
        }
        printf("\n\n");

        return;
    }

    // print front of queue
    void queueFront()
    {
        if (front == rear)
        {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", queue[front]);
        return;
    }
};

// Driver code
int main(void)
{
    Queue q(3);

    int x = 9, y = x + 3, z = x + y, p = y + z;

    q.Enqueue(z);
    q.queueDisplay();

    q.Enqueue(p);
    q.queueDisplay();

    q.Dequeue();
    q.queueDisplay();

    q.Enqueue(y);
    q.queueDisplay();

    q.Enqueue(z);
    q.queueDisplay();

    return 0;
}
