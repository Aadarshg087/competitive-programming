#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *right;
    BinaryTreeNode<T> *left;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

void insertNode(BinaryTreeNode<int> *root, int data)
{
    BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    else if (newNode->data > root->data)
    {
        insertNode(root->right, data);
        root->right = NULL;
    }
    else if (newNode->data < root->data)
    {
        insertNode(root->left, data);
        root->left = NULL;
    }
}

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": L: " << root->left->data << " R: " << root->right->data << endl;

    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BinaryTreeNode<int> *root = NULL;
    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 3);
    insertNode(root, 4);
    insertNode(root, 5);

    cout << root->data << endl;
    cout << "hello world" << endl;

    printTree(root);

    return 0;
}