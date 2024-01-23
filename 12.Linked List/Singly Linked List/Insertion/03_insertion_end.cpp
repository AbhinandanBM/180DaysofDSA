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

    int arr[5] = {2, 4, 3, 6, 8};
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *tail = Head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            // Node *temp = new Node(arr[i]);
            // tail->next = temp;
            tail->next = new Node(arr[i]);
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