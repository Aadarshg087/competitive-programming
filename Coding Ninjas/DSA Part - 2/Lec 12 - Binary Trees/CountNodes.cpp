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
        this->right = right;
        this->left = left;
    }

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

int countNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 1 + countNodes(root->left) + countNodes(root->right);
    return count;
}
int main()
{

    return 0;
}