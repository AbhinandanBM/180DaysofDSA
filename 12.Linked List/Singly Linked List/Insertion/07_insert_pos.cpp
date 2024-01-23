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
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    Node *Head = NULL;

    int arr[] = {2, 4, 5, 6, 8};

    Head = CreateLinkedList(arr, 0, 5);

    // Insert element on specific position
    int x = 3;
    int value = 10;

    Node *temp = Head;
    x--;

    while (x--)
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}