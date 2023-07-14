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
        this->left = data;
        this->right = data;
    }

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    int ans = 1 + max(lHeight, rHeight);
    return ans;
}

int main()
{

    return 0;
}