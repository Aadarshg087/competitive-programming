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

bool solve(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *&ans)
{
    // Base case
    if (root == NULL)
        return 0;

    bool l = solve(root->left, p, q, ans);
    bool r = solve(root->right, p, q, ans);

    if (r && l)
    {
        ans = root;
        return 0;
    }

    if (root->val == p->val)
    {
        ans = root;
        return 1;
    }
    else if (root->val == q->val)
    {
        ans = root;
        return 1;
    }

    return l || r;
}

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    TreeNode *ans = NULL;
    solve(root, p, q, ans);
    return ans;
}

int main()
{

    return 0;
}