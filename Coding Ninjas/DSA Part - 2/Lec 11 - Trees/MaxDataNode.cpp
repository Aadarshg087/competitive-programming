#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return root;
    }
    TreeNode<int> *max = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *max2 = maxDataNode(root->children[i]);
        if (max2->data > max->data)
        {
            max = max2;
        }
    }
    return max;
}

int main()
{

    return 0;
}