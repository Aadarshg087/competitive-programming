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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2)
{
    bool ans = true;
    if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    if (root1->data != root2->data)
    {
        return false;
    }
    else if (root1->children.size() != root2->children.size())
    {
        return false;
    }
    for (int i = 0; i < root1->children.size(); i++)
    {
        ans = areIdentical(root1->children[i], root2->children[i]);
    }
    return ans;
}

int main()
{

    return 0;
}
