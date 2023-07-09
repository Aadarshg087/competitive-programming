#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

void PreOrderTraversal(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        PreOrderTraversal(root->children[i]);
    }
}

void PostOrderTraversal(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->children.size() == 0)
    {
        cout << root->data << " ";
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        PostOrderTraversal(root->children[i]);
    }
    cout << root->data << " ";
}

int main()
{

    return 0;
}