#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node *Insert_end(int value, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        head = new Node(value);
        tail = head;
    }
    else
    {
        Node *temp = new Node(value);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    return head;
}

int main()
{
    int n, value;
    Node *head = NULL, *tail = NULL;
    cout << "Enter the size of the list:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value:";
        cin >> value;
        head = Insert_end(value, head, tail);
    }

    Node *temp = head;
    cout << "The Nodes are:" << endl;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}