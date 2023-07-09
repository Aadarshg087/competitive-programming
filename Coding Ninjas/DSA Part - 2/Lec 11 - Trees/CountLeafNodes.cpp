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

int getLeafNodeCount(TreeNode<int> *root)
{
    int count = 0;
    if (root->children.size() == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < root->children.size(); i++)
        {
            count = count + getLeafNodeCount(root->children[i]);
        }
        return count;
    }
}

int main()
{

    return 0;
}