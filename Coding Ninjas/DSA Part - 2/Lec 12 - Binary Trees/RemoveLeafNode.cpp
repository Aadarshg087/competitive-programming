#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return NULL;
    }

    BinaryTreeNode<int> *temp1 = removeLeafNodes(root->left);
    BinaryTreeNode<int> *temp2 = removeLeafNodes(root->right);

    if (temp1 == NULL && temp2 == NULL)
    {
        root->left = NULL;
        root->right = NULL;
    }

    return root;
}

int main()
{

    return 0;
}