#include <iostream>
using namespace std;

class cQueue
{
    int *arr;
    int front, rear, size;

public:
    cQueue(int n)
    {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void Push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            cout << "Pushed " << x << " into the Queue\n";
            arr[0] = x;
        }
        else if (isFull())
        {
            cout << "Queue Overflow\n";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "Pushed " << x << " into the Queue\n";
        }
    }
    void Pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "Popped " << arr[front] << " from the Queue\n";
                front = rear = -1;
            }
            else
            {
                cout << "Popped " << arr[front] << " from the Queue\n";
                front = (front + 1) % size;
            }
        }
    }

    int Start()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        else
            return arr[front];
    }
};

int main()
{
    cQueue cq(3);
    cq.Push(3);
    cq.Push(5);
    cq.Push(7);
    cq.Pop();
    cq.Push(9);
    cq.Pop();
    cq.Pop();
    cq.Push(6);
    cq.isEmpty();
    int x = cq.Start();
    if (!cq.isEmpty())
        cout << x << endl;

    return 0;
}