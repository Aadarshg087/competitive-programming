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

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode *insertNode(BinaryTreeNode *root, int data)
{
    if (root == NULL)
    {
        BinaryTreeNode *node = new BinaryTreeNode(data);
        return node;
    }
    if (root->data <= data)
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

bool searchInBST(BinaryTreeNode *root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }

    return (searchInBST(root->left, key) || searchInBST(root->right, key));
}

void printTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": ";
    if (root->left != NULL)
    {
        cout << root->left->data << " ";
    }
    else
    {
        cout << "NULL ";
    }
    if (root->right != NULL)
    {
        cout << root->right->data << " ";
    }
    else
    {
        cout << "NULL ";
    }
    cout << endl;
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
    root = insertNode(root, 5);
    root = insertNode(root, 11);
    root = insertNode(root, 35);

    printTree(root);

    cout << "Key: " << 7 << endl;

    cout << searchInBST(root, 7) << endl;
    if (searchInBST(root, 7))
    {
        cout << "Yes, elements is present in the tree" << endl;
    }
    else
    {
        cout << "No, element is not present in the tree" << endl;
    }

    return 0;
}