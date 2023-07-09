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

TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    TreeNode<int> *ans = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = getNextLargerElement(root->children[i], x);
    }
    if (root->children.size() == 0)
    {
        return root;
    }
    else if (ans->data > x)
    {
        
    }
}

int main()
{

    return 0;
}