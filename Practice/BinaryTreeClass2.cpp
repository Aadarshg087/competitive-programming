#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

BinaryTreeNode *insertNode(BinaryTreeNode *root, int data)
{
    BinaryTreeNode *node = new BinaryTreeNode(data);
    if (root == NULL)
    {
        root = node;
        return root;
    }
    if (root->data < data)
    {
        BinaryTreeNode *temp = insertNode(root->right, data);
        root->right = temp;
    }
    else if (root->data > data)
    {
        BinaryTreeNode *temp = insertNode(root->left, data);
        root->left = temp;
    }

    return root;
}

void printTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";
    cout << root->left->data << " " << root->right->data << endl;
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BinaryTreeNode *root = NULL;

    root = insertNode(root, 20);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 40);

    printTree(root);

    return 0;
}