#include <iostream>
#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

class BST
{
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        root = NULL;
    }

    BinaryTreeNode<int> *helperInsert(BinaryTreeNode<int> *root, int data)
    {
        cout << "Helper inserts is called" << endl;
        if (root == NULL)
        {
            cout << "NUll root is called" << endl;
            BinaryTreeNode<int> *Node = new BinaryTreeNode<int>(data);
            root = Node;
            cout << root->data << endl;
            // cout << data << endl;
            // cout << Node->data << endl;
            return root;
        }
        if (root->data >= data)
        {
            BinaryTreeNode<int> *temp = helperInsert(root->left, data);
            root->left = temp;
        }
        else
        {
            BinaryTreeNode<int> *temp = helperInsert(root->right, data);
            root->right = temp;
        }

        return root;
    }

    void helperPrint(BinaryTreeNode<int> *root)
    {
        cout << "helper print is called" << endl;
        if (root == NULL)
        {
            cout << "hello is called" << endl;
            return;
        }
        cout << root->data << " " << root->left << " " << root->right << endl;
        helperPrint(root->left);
        helperPrint(root->right);
    }

    void insert(int data)
    {
        cout << "Main Insert is called" << endl;
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
    BST b;
    cout << "main is called" << endl;
    b.insert(10);
    b.print();

    return 0;
}