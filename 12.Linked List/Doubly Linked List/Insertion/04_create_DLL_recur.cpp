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

Node *createDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);

    return temp;
}

int main()
{
    int n, arr[100];
    cout << "Enter the size:";
    cin >> n;
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = NULL;
    head = createDLL(arr, 0, n, NULL);

    Node *trav = head;
    cout << "The Nodes are:" << endl;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
