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

Node *CreateList(int value, Node *Head)
{
    if (Head == NULL)
    {
        Head = new Node(value);
    }
    else
    {
        Node *temp = Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node(value);
        temp->next = temp2;
    }
    return Head;
}

// Using Recursion
Node *Reverse_list(Node *curr,Node *prev){
    if(curr==NULL)
        return prev;
    
    Node *fut=curr->next;
    curr->next=prev;
    return Reverse_list(fut,curr);
}

int main()
{
    int n, value;
    cout << "Enter the size of the linked list:";
    cin >> n;
    Node *Head = NULL;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value:";
        cin >> value;
        Head = CreateList(value, Head);
    }

    //  Traversal
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    Head=Reverse_list(Head,NULL);



    cout<<"Reversed list will be:"<<endl;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}