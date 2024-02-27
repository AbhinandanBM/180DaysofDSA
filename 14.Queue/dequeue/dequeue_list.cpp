#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next, *prev;
    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

class dequeue
{
    Node *front, *rear;

public:
    dequeue()
    {
        front = rear = NULL;
    }

    void push_front(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "Pushed " << x << " in front of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            cout << "Pushed " << x << " in front of dequeue\n";
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "Pushed " << x << " in back of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            cout << "Pushed " << x << " in back of dequeue\n";
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
            return;
        }
    }

    void pop_front()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow\n";
            return;
        }
        else
        {
            Node *temp = front;
            cout << "Popped " << temp->data << " from front of dequeue\n";
            front = front->next;
            delete temp;
            if (front)
                front->prev = NULL; // greater than 1 node
            else
                rear = NULL; // incase of single node exist
        }
    }

    void pop_back()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow\n";
            return;
        }
        else
        {
            Node *temp = rear;
            cout << "Popped " << temp->data << " from back of dequeue\n";
            rear = rear->prev;
            delete temp;
            if (rear)
                rear->next = NULL; // greater than 1 node
            else
                front = NULL; // incase of single node exist
        }
    }

    int start()
    {
        if (front == NULL)
            return -1;
        else
            return front->data;
    }

    int end()
    {
        if (rear == NULL)
            return -1;
        else
            return rear->data;
    }
};

int main()
{
    dequeue dq;
    dq.push_front(12);
    dq.push_front(10);
    dq.push_back(56);
    dq.push_back(67);
    dq.pop_front();
    dq.pop_back();
    cout << dq.start() << endl;
    cout << dq.end() << endl;

    return 0;
}