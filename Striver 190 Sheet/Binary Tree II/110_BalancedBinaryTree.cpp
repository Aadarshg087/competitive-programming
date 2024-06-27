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

int solve(TreeNode *root, bool &ans)
{
    if (root == NULL)
        return 0;
    int lh = solve(root->left, ans);
    int rh = solve(root->right, ans);
    int balance = abs(lh - rh);
    if (ans == 0)
        return ans;
    if (balance > 1)
        ans = false;
    cout << root->val << " " << balance << endl;
    return 1 + max(lh, rh);
}
bool isBalanced(TreeNode *root)
{
    bool ans = 1;
    solve(root, ans);
    return ans;
}

int main()
{

    return 0;
}