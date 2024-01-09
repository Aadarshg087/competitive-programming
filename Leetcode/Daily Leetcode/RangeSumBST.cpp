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

int rangeSumBST(TreeNode *root, int low, int high)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->val <= high && root->val >= low)
    {
        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }

    if (root->val < low)
    {
        return rangeSumBST(root->right, low, high);
    }

    return rangeSumBST(root->left, low, high);
}

int rangeSumBST(TreeNode *root, int low, int high)
{
    if (root == NULL)
    {
        return 0;
    }

    int ans = 0;
    if (root->val <= high && root->val >= low)
    {
        cout << root->val << endl;
        ans = root->val;
    }
    ans += rangeSumBST(root->left, low, high) +
           rangeSumBST(root->right, low, high);

    return ans;
}

int main()
{

    return 0;
}