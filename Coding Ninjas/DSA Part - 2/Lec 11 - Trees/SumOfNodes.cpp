#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    vector<TreeNode *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};

int sumOfNodes(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += sumOfNodes(root->children[i]);
    }
    return sum;
}

int main()
{

    return 0;
}