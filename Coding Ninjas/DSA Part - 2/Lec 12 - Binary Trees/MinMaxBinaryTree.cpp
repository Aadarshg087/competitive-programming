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
        delete right;
        delete left;
    }
};

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    getMinAndMax(root->left);
    getMinAndMax(root->right);
    int max = INT_MIN;
    int min = INT_MAX;

    // finding the maximum element around
    if (root->data > root->left->data)
    {
        if (root->data > root->right->data)
        {
            max = root->data;
        }
        else
        {
            max = root->right->data;
        }
    }
    else
    {
        if (root->left->data > root->right->data)
        {
            max = root->left->data;
        }
        else
        {
            max = root->right->data;
        }
    }

    // finding the minimum element around
    if (root->data < root->left->data)
    {
        if (root->data < root->right->data)
        {
            min = root->data;
        }
        else
        {
            min = root->right->data;
        }
    }
    else
    {
        if (root->left->data < root->right->data)
        {
            min = root->left->data;
        }
        else
        {
            min = root->right->data;
        }
    }

    return make_pair(min, max);
}

int main()
{

    return 0;
}