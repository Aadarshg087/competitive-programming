#include <iostream>
#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

class BST
{
    BinaryTreeNode<int> *root;

public:
    bool helperHasData(BinaryTreeNode<int> *root, int data)
    {
        if (root == NULL)
        {
            return false;
        }
        if (root->data == data)
        {
            return true;
        }
        return helperHasData(root->left, data) || helperHasData(root->right, data);
    }

    BinaryTreeNode<int> *helperInsert(BinaryTreeNode<int> *root, int data)
    {
        cout << "Insert: " << endl;
        if (root == NULL)
        {
            BinaryTreeNode<int> *node = new BinaryTreeNode<int>(data);
            return node;
        }
        if (root->data >= data)
        {
            BinaryTreeNode<int> *temp = helperInsert(root->left, data);
            root->left = temp;
        }
        else if (root->data < data)
        {
            BinaryTreeNode<int> *temp = helperInsert(root->right, data);
            root->right = temp;
        }

        return root;
    }

    void helperPrint(BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << "N:" << root->data << "L:" << root->left->data << ", "
             << "R:" << root->right->data << endl;

        helperPrint(root->left);
        helperPrint(root->right);
    }

    // public:
    BST()
    {
        root = NULL;
    }
    bool hasData(int data)
    {
        return helperHasData(root, data);
    }

    void insert(int data)
    {
        cout << "Helo is called" << endl;
        cout << "insert public: " << root->data << data << endl;
        helperInsert(root, data);
    }

    void print()
    {
        cout << "main print is called" << endl;
        helperPrint(root);
    }
};

int main()
{

    BST *b = new BST();
    cout << "main is called" << endl;
    b->insert(4);
    cout << "after 1 insert is called" << endl;
    b->insert(5);
    b->insert(1);
    b->insert(2);

    b->print();

    return 0;
}