#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

int solve(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int lh = solve(root->left);
    int rh = solve(root->right);
    return 1 + max(lh, rh);
}
int maxDepth(TreeNode *root)
{
    return solve(root);
}

int main()
{

    return 0;
}