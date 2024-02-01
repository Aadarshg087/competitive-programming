#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {

        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    int h = max(l, r) + 1;
    return h;
}

pair<int, int> getDiameter(TreeNode *root)
{
    if (root == NULL)
        return {0, true};
    
    

}

int solve(TreeNode *root, int &mainAns)
{
    if (root == NULL)
        return 0;

    int ld = height(root->left);
    int rd = height(root->right);
    int h = abs(height(root->left) - height(root->right));
    int d = max(d, max(ld, rd));

    return d;
}

int diameter(TreeNode *root)
{
    int mainAns = 0;
    return solve(root, mainAns);
}

int main()
{

    return 0;
}