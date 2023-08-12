#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *right;
    BinaryTreeNode<T> *left;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }

    elementsInRangeK1K2(root->left, k1, k2);

    if (root->data >= k1 && root->data <= k2)
    {
        cout << root->data << " ";
    }

    elementsInRangeK1K2(root->right, k1, k2);
    
    return;
}

int main()
{

    return 0;
}