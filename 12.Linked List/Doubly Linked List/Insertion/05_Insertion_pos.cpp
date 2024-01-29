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

void Traverse(Node *head)
{
    Node *trav = head;
    cout << "The Nodes are:" << endl;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}

Node *Insert_pos(int pos, int value, Node *head)
{
    // Insert at start
    if (pos == 0)
    {
        // List is not exist
        if (head == NULL)
        {
            head = new Node(value);
        }
        // List is exist
        else
        {
            Node *temp = new Node(value);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node *curr = head;

        while (--pos)
        {
            curr = curr->next;
        }

        // to check it is end
        if (curr->next == NULL)
        {
            Node *temp = new Node(value);
            curr->next = temp;
            temp->prev = curr;
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    return head;
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

    Traverse(head);

    int pos, Pvalue;
    cout << "\nEnter the position to insert the element:";
    cin >> pos;
    cout << "\nEnter the value:";
    cin >> Pvalue;

    head = Insert_pos(pos, Pvalue, head);

    Traverse(head);

    return 0;
}
