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

int getLargeNodeCount(TreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;
    if (root->data > x)
    {
        count = 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        count = count + getLargeNodeCount(root->children[i], x);
    }
    return count;
}

int main()
{

    return 0;
}