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

Node *createList(int value, Node *head)
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

void Traverse(Node *head)
{
    Node *temp = head;
    cout << "\nThe Nodes are:" << endl;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *delete_pos(int pos, Node *head)
{
    if (pos == 1)
    {
        if (head == NULL)
        {
            cout << "Deletion is not Possible" << endl;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }

        // If it is last node of list
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }
    return head;
}

int main()
{
    int n, value;
    cout << "Enter the size:";
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value:";
        cin >> value;
        head = createList(value, head);
    }

    Traverse(head);

    int pos;
    cout << "\nEnter the position to delete:";
    cin >> pos;

    head = delete_pos(pos, head);

    cout << "\nAfter deletion:";
    Traverse(head);
    return 0;
}