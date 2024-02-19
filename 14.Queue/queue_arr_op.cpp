#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int n)
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
        return rear == size - 1;
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
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout << "Pushed " << x << " into the Queue\n";
        }
    }
    int Pop()
    {
        int val;
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else
        {
            if (front == rear)
            {
                val = arr[front];
                front = rear = -1;
                cout << "Popped " << val << " from the Queue\n";
            }
            else
            {
                val = arr[front];
                front = front + 1;
                cout << "Popped " << val << " from the Queue\n";
            }
        }
        return val;
    }
    int start()
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
    int n;
    cout << "Enter the size:" << endl;
    cin >> n;
    Queue Q(n);
    Q.Push(3);
    Q.Push(5);
    Q.Push(8);
    cout << Q.Pop() << endl;
    cout << Q.Pop() << endl;
    int x = Q.start();
    if (!Q.isEmpty())
        cout << x << endl;
    cout << Q.isEmpty() << endl;
    cout << Q.isFull() << endl;

    return 0;
}