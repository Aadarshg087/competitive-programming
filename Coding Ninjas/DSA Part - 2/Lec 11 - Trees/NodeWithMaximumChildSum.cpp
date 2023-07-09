#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode()
    {
        this->data = data;
    }
};

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    int totalSum = 0;
    totalSum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        totalSum += root->children[i]->data;
    }

    int otherSum = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *otherSum = maxSumNode(root->children[i]);
    }
    return otherSum;
}

int main()
{

    return 0;
}