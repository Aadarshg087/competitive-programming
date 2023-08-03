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

int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = 1 + height(root->left);
    int rightHeight = 1 + height(root->right);

    int ans = 1 + max(leftHeight, rightHeight);

    return ans;
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    bool mainAns = true;
    mainAns = isBalanced(root->left);
    bool mainAns2 = true;
    mainAns2 = isBalanced(root->right);
    int lHeight = height(root->left);
    int rHeight = height(root->right);

    bool ans = true;
    if (abs((lHeight - rHeight) > 1))
    {
        ans = false;
    }

    if (mainAns == false || mainAns2 == false)
    {
        return false;
    }

    return ans;
}

int main()
{

    return 0;
}