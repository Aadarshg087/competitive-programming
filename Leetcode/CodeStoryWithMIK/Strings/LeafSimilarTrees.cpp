#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void traverse(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return;
    }

    traverse(root->left, v);
    traverse(root->right, v);
}
bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
    vector<int> v1;
    vector<int> v2;

    traverse(root1, v1);
    traverse(root2, v2);
    return v1 == v2;
}

int main()
{

    return 0;
}