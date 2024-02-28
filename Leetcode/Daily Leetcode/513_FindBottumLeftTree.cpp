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
class TreeNode
{
public:
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int val)
    {
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

// Using BFS --> T.C - O(N) and S.C - O(1)
int findBottomLeftValue(TreeNode *root)
{
    queue<TreeNode *> que;
    int bottom;
    que.push(root);
    while (!que.empty())
    {
        TreeNode *node = que.front();
        bottom = node->val;
        if (node->left)
            que.push(node->left);
        if (node->right)
            que.push(node->right);
    }

    return bottom;
}

// Using DFS --> T.C - O(N) and S.C - O(depth of the tree)
void solve(TreeNode *root, int depth, int &maxD, int &ans)
{
    if (root->left == NULL && root->right == NULL)
    {
        if (depth > maxD)
        {
            ans = root->val;
            maxD = depth;
            return;
        }
    }
    if (root->left != NULL)
    {
        solve(root->left, depth + 1, maxD, ans);
    }
    if (root->right != NULL)
        solve(root->right, depth + 1, maxD, ans);
}

int findBottomLeftValue(TreeNode *root)
{
    int depth = 0;
    int ans = root->val;
    solve(root, depth, depth, ans);
    return ans;
}

int main()
{

    return 0;
}