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

int main()
{
    Node *Head;
    Head = NULL;
    int arr[5] = {2, 4, 3, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        // Linked List is empty
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        // Linked List exists
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}