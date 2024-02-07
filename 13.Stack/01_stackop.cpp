#include <iostream>
using namespace std;

// Implementing using Array
class Stack
{
    int *arr;
    int size;
    int top;

public:
    bool flag = 1;
    // Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the Stack\n";
            flag = 0;
        }
    }

    // Pop
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }
        else
        {
            top--;
            cout << "Poped " << arr[top + 1] << " from the Stack\n";
            if (top == -1)
                flag = 0;
        }
    }

    // Peek
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        else
            return arr[top];
    }

    // IsEmpty
    bool isEmpty()
    {
        return top == -1;
    }

    // IsSize
    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    // we can insert negative values to stack using flag logic
    Stack S(5);
    S.push(-1);
    S.pop();
    int value = S.peek();
    if (S.flag == 0)
        cout << value << endl;

    return 0;
}