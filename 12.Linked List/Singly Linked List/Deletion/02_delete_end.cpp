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

Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    int n, arr[100];
    cout << "Enter the size of the array:";
    cin >> n;

    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *Head = NULL;

    Head = CreateLinkedList(arr, 0, n);

    // Deletion at end of the list
    if (Head != NULL)
    {
        // only one list is present
        if (Head->next == NULL)
        {
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }
        // More than one node is present
        else
        {
            Node *curr = Head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            delete curr;
            prev->next = NULL;
        }
    }

    // Traversal
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}