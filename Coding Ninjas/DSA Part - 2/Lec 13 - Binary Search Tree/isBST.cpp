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

int maxElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0; //
    }

    int ans = max(root->data, max(maxElement(root->left), maxElement(root->right)));
    return ans;
}

int minElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }

    int ans = min(root->data, min(minElement(root->left), minElement(root->right)));
    return ans;
}

// ----------- Approach 1 -> Time Complexity = O(n^2) ------------
bool isBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }

    int leftMax = maxElement(root->left);
    int rightMin = minElement(root->right);

    if (root->data < leftMax || root->data > rightMin)
    {
        return false;
    }
    else
    {
        bool ans = isBST(root->left) && isBST(root->right);
        return ans;
    }

    // ---------- Another Approach --------------- //
    // bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
    // return output;
}

int main()
{

    return 0;
}