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

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = 1 + isBalanced(root->left);
    int rightHeight = 1 + isBalanced(root->right);

    if (abs((leftHeight - rightHeight) > 1))
    {
        return false;
    }
    return true;
}

int main()
{

    return 0;
}