#include <iostream>
using namespace std;
// Stack implementation through linked list

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

class Stack
{
    Node *top;
    int size; // actual size of the stack

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // Push
    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "Stack Overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            cout << "Popped " << temp->data << " from the stack\n";
            delete temp;
            size--;
        }
    }

    // Peek
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    // isEmpty
    bool isEmpty()
    {
        return top == NULL;
    }

    // isSize
    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(3);
    S.push(5);
    S.push(89);
    S.pop();
    S.pop();
    cout << S.peek() << endl;
    cout << S.isEmpty() << endl;
    cout << S.isSize() << endl;

    return 0;
}