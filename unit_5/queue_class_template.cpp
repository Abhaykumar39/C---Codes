///*************** IMPLEMENTING STACK USING CLASS TEMPLATE *************  //

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#define m 5
template <class T>
class Queue
{
public:
    T que[m];
    int rear;
    int front;

    Queue()
    {
        rear = -1;
        front = -1; /// default constructor to initialize top
    }

    void enqueue()
    {
        if (rear == m - 1)
        {
            cout << "\nQueue is overflow";
            getch();
            return;
        }
        cout << "\n\n\tenter data to Enqueue : ";
        rear++;
        cin >> que[rear];
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "\n\n\tStack is underflow";
            return;
        }
        if (front == rear)
        {
            rear = -1;
        }
        else
        {
            cout << "\n\n\tPopped data : " << que[front];
            front++;
        }
    }
    void disp()
    {
        int i;
        if (front == -1)
        {
            cout << "\n\n\tStack is underflow\n";
            return;
        }

        cout << "\n\n";
        for (i = front; i <= rear; i++)
        {
            cout << "\t" << que[i];
        }
        cout << "\n\n";
    }
};
int main()
{
    Queue<int> s1; /// IMPLEMENTS INTGER STACK //
    int ch;
    while (1)
    {
        cout << "Queue";
        cout << " 1. Enqueue \n 2.Dequeue \n 3.Display \n 4. Exit\n ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.enqueue();
            if (s1.front == -1)
            {
                s1.front = 0;
            }
            break;

        case 2:
            s1.dequeue();
            if (s1.rear == -1)
            {
                s1.front = -1;
            }
            break;

        case 3:
            s1.disp();
            break;

        case 4:
            exit(0);

        default:
            cout << "\n\n\tInvalid choice";
            getch();
            break;
        }
    }
}
