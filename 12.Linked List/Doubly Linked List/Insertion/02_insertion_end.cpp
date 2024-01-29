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

Node *Insert_end(int value, Node *head)
{
    if (head == NULL)
    {
        head = new Node(value);
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        Node *temp = new Node(value);
        curr->next = temp;
        temp->prev = curr;
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
        head = Insert_end(value, head);
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