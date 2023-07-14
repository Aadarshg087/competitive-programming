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
        this->right = left;
    }

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        if (front->data == x)
        {
            return true;
        }
        if (front->left != NULL)
        {
            BinaryTreeNode<int> *leftChild = front->left;
            pendingNodes.push(leftChild);
        }
        if (front->right != NULL)
        {
            BinaryTreeNode<int> *rightChild = front->right;
            pendingNodes.push(rightChild);
        }
        pendingNodes.pop();
    }
    return false;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    bool ans = isNodePresent(root->left, x) || isNodePresent(root->right, x);
    return ans;
}

int main()
{

    return 0;
}