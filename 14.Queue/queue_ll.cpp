#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void Push(int x)
    {
        if (isEmpty())
        {
            front = new Node(x);
            rear = front;
            cout << "Pushed " << x << " into the Queue\n";
        }
        else
        {
            Node *temp = new Node(x);
            if (temp == NULL)
            {
                cout << "Queue Overflow\n";
                return;
            }
            rear->next = temp;
            rear = rear->next;
            cout << "Pushed " << x << " into the Queue\n";
        }
    }

    void Pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            cout << "Popped " << temp->data << " from the Queue\n";
            delete temp;
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
            return front->data;
    }
};

int main()
{
    Queue q;
    q.Push(8);
    q.Push(5);
    q.Push(9);
    q.Pop();
    cout << q.isEmpty() << endl;
    cout << q.Start() << endl;

    return 0;
}