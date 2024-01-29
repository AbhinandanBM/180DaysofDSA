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

Node *Insert_beg(int value, Node *head)
{
    if (head == NULL)
    {
        head = new Node(value);
    }
    else
    {
        Node *temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}

int main()
{
    int n, value;
    Node *head = NULL;
    cout << "Enter the size of the list:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value:";
        cin >> value;
        head = Insert_beg(value, head);
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