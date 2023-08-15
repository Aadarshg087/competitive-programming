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
        return NULL;
    }

    if (root->left->left == NULL && root->left->right == NULL)
    {
        root->left = NULL;
        return root;
    }
    if (root->right->left == NULL && root->right->right == NULL)
    {
        root->right = NULL;
        return root;
    }

    removeLeafNodes(root->left);
    removeLeafNodes(root->right);

    return root;
}

int main()
{

    return 0;
}