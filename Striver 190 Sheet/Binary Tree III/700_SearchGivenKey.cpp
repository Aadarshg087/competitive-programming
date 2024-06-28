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

TreeNode *solve(TreeNode *root, int val)
{
    // Base case
    if (root == NULL)
        return NULL;
    // Recurrence Relation
    if (root->val == val)
        return root;
    TreeNode *a = solve(root->left, val);
    TreeNode *b = solve(root->right, val);
    if (a != NULL)
        return a;
    if (b != NULL)
        return b;

    return NULL;
}
TreeNode *searchBST(TreeNode *root, int val)
{
    return solve(root, val);
}

int main()
{

    return 0;
}