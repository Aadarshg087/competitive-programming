#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};

int getHeight(TreeNode<int> *root)
{
    int height = 1;
    int res;
    for (int i = 0; i < root->children.size(); i++)
    {
        res = height + getHeight(root->children[i]);
    }
    return res;
}

int main()
{

    return 0;
}