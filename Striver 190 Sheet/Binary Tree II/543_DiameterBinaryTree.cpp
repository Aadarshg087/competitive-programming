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

int solve(TreeNode *root, int &maxi)
{
    if (root == NULL)
        return 0;

    int lh = solve(root->left, maxi);
    int rh = solve(root->right, maxi);

    maxi = max(lh + rh, maxi);
    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int maxi = 0;
    solve(root, maxi);
    return maxi;
}

int main()
{

    return 0;
}