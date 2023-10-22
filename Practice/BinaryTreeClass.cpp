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

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode<int> *insertNode(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)   
    {
        BinaryTreeNode<int> *node = new BinaryTreeNode<int>(data);
        return node;
    }

    if (root->data >= data)
    {
        BinaryTreeNode<int> *temp = insertNode(root->left, data);
        root->left = temp;
    }
    else if (root->data < data)
    {
        BinaryTreeNode<int> *temp = insertNode(root->right, data);
        root->right = temp;
    }

    return root;
}

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": L: " << root->left << " R: " << root->right->data << endl;

    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BinaryTreeNode<int> *root = NULL;
    root = insertNode(root, 1);
    root = insertNode(root, 2);
    root = insertNode(root, 3);
    root = insertNode(root, 4);
    root = insertNode(root, 5);

    printTree(root);

    return 0;
}