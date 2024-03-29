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
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode<int> *ans = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = getNextLargerElement(root->children[i], x);
    }

    if (root->data > x)
    {
        if (root->data <= ans->data)
        {
            ans = root;
        }
    }
    else if (root->data != x)
    {
        ans = NULL;
    }
    return ans;
}

int main()
{

    return 0;
}