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

Node *CreateList(int value, Node *Head)
{
    if (Head == NULL)
    {
        Head = new Node(value);
    }
    else
    {
        Node *temp = Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node(value);
        temp->next = temp2;
    }
    return Head;
}

int main()
{
    int n, value;
    cout << "Enter the size of the linked list:";
    cin >> n;
    Node *Head = NULL;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value:";
        cin >> value;
        Head = CreateList(value, Head);
    }

    //  Traversal
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    int count;
    cout << "\nEnter the Node number to delete:";
    cin >> count;

    if (count == 1)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    else
    {
        Node *curr = Head;
        Node *prev = NULL;
        while (--count)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}