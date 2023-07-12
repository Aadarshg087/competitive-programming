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

TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode<int> *ans = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = getSecondLargestNode(root->children[i]);
    }

    if (root->data > ans->data)
    {
        
    }
}
int main()
{

    return 0;
}