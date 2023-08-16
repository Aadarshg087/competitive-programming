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
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode<int> *constructTree(int *input, int n)
{
    int mid;
    if (n == 0)
    {
        return NULL;
    }
    if (n % 2 == 0)
    {
        mid = n / 2;
    }
    else
    {
        mid = (n / 2) + 1;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[mid]);

    if (n == 1)
    {
        return root;
    }

    BinaryTreeNode<int> *leftSubTree = constructTree(input, mid);
    BinaryTreeNode<int> *rightSubTree = constructTree(input + mid + 1, n - (mid + 1));

    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}

int main()
{

    return 0;
}