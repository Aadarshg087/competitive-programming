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

bool solve(TreeNode *root, long long int mini, long long int maxi)
{
    // Base case
    if (root == NULL)
        return true;

    // Recurrence relation
    if (root->val <= mini || root->val >= maxi)
        return false;

    return solve(root->left, mini, root->val) && solve(root->right, root->val, maxi);
}
bool isValidBST(TreeNode *root)
{
    long long int maxi = LLONG_MAX;
    long long int mini = LLONG_MIN;
    return solve(root, mini, maxi);
}

int main()
{

    return 0;
}