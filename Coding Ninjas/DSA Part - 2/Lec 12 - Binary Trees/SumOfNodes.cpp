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
        this->left = NULL;
        this->right = NULL;
    }

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

int getSum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = sum + root->data + getSum(root->left) + getSum(root->right);
    return sum;
}

int main()
{

    return 0;
}