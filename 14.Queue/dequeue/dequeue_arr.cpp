#include <iostream>
using namespace std;

class dequeue
{
    int front, rear, size;
    int *arr;

public:
    dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return (rear + 1) % size == front;
    }

    // push front
    void push_front(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " in front of dequeue\n";
            return;
        }
        else if (IsFull())
        {
            cout << "Dequeue Overflow\n";
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout << "Pushed " << x << " in front of dequeue\n";
            return;
        }
    }
    // push back
    void push_back(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " in back of dequeue\n";
            return;
        }
        else if (IsFull())
        {
            cout << "Dequeue Overflow\n";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "Pushed " << x << " in back of dequeue\n";
            return;
        }
    }
    // pop front
    void pop_front()
    {
        if (IsEmpty())
        {
            cout << "Dequeue Underflow\n";
            return;
        }
        else
        {
            cout << "Popped " << arr[front] << " from front of dequeue\n";
            // one node
            if (front == rear)
                front = rear = -1;
            // more than one node
            else
                front = (front + 1) % size;
        }
    }
    // pop back
    void pop_back()
    {
        if (IsEmpty())
        {
            cout << "Dequeue Underflow\n";
            return;
        }
        else
        {
            cout << "Popped " << arr[rear] << " from back of dequeue\n";
            // one node
            if (front == rear)
                front = rear = -1;
            // more than one node
            else
                rear = (rear - 1 + size) % size;
        }
    }
    // start
    int start()
    {
        if (IsEmpty())
            return -1;
        return arr[front];
    }
    // end
    int end()
    {
        if (IsEmpty())
            return -1;
        return arr[rear];
    }
};

int main()
{
    dequeue dq(6);
    dq.push_back(23);
    dq.push_back(45);
    dq.push_front(12);
    dq.push_front(9);
    dq.push_back(25);
    dq.push_back(78);
    dq.pop_front();
    dq.pop_back();
    cout << dq.start() << endl;
    cout << dq.end() << endl;

    return 0;
}