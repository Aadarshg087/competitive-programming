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
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// Preorder = Root , Left, Right

void solve(TreeNode *root, vector<int> &ans)
{
    // Base case
    if (root == NULL)
        return;

    // Recurrence Relation
    if (root->left)
        solve(root->left, ans);

    if (root->right)
        solve(root->right, ans);

    ans.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    solve(root, ans);
    return ans;
}

int main()
{

    return 0;
}