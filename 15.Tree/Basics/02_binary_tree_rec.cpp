#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *binaryTree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << " :";
    temp->left = binaryTree();
    cout << "Enter the right Child of " << x << " :";
    temp->right = binaryTree();

    return temp;
}

int main()
{
    cout << "Enter the root Node:";
    Node *root;
    root = binaryTree();

    return 0;
}