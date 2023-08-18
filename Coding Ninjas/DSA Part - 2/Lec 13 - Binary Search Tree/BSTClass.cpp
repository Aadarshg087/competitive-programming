#include <iostream>
#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

class BST
{
    BinaryTreeNode<int> *root;

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
        if (root == NULL)
        {
            BinaryTreeNode<int> *node = new BinaryTreeNode<int>(data);
            return node;
        }
        if (root->data > data)
        {
            helperInsert(root->left, data);
            BinaryTreeNode<int> *temp = helperInsert(root->right, data);
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

public:
    bool hasData(int data)
    {
        return helperHasData(root, data);
    }

    void insert(int data)
    {
        helperInsert(root, data);
        
    }

    void print()
    {
        helperPrint(root);
    }

    
};

int main()
{

    return 0;
}