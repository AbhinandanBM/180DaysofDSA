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

    // Deletion at beginning of the list
    Node *temp=Head;
    if(Head==NULL){
        cout<<"Deletion is not possible"<<endl;
    }
    else{
        Head=Head->next;
        delete temp;
    }

    // Traversal
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}