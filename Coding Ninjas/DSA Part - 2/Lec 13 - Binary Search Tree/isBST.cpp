#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<int> *right;
    BinaryTreeNode<int> *left;

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

bool isBST(BinaryTreeNode<int> *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else if (root == NULL)
    {
        return false;
    }

    if (root->right->data < root->data || root->left->data > root->data)
    {
        return false;
    }

    bool ans = isBST(root->left) && isBST(root->right);
    return ans;
}

int main()
{

    return 0;
}