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

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    // Node
    cout << root->data << " ";
    // left
    preOrder(root->left);
    // right
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    // left
    inOrder(root->left);
    // Node
    cout << root->data << " ";
    // right
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    // left
    postOrder(root->left);
    // right
    postOrder(root->right);
    // Node
    cout << root->data << " ";
}

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
    // Tree Creation
    cout << "Enter the root Node:";
    Node *root;
    root = binaryTree();

    // Tree Traversal
    cout << "\nPreOrder:";
    preOrder(root);

    cout << "\nInOrder:";
    inOrder(root);

    cout << "\nPostOrder:";
    postOrder(root);

    return 0;
}