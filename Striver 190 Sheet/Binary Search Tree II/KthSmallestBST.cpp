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

void solve(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    solve(root->left, v);
    v.push_back(root->val);
    solve(root->right, v);
}

int kthSmallest(TreeNode *root, int k)
{
    vector<int> v;
    solve(root, v);
    return v[k - 1];
}

// Another approach
void solve(TreeNode *root, int k, int &count, int &ans)
{
    if (root == NULL)
        return;

    solve(root->left, k, count, ans);
    if (count == k)
    {
        ans = root->val;
        count = -1;

        return;
    }
    else
        count++;

    solve(root->right, k, count, ans);
}

int kthSmallest(TreeNode *root, int k)
{
    int count = 1;
    int ans = 0;
    solve(root, k, count, ans);
    return ans;
}

int main()
{

    return 0;
}
