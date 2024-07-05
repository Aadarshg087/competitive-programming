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
void solve(TreeNode *root, set<int> &st)
{
    if (root == NULL)
        return;

    solve(root->left, st);
    st.insert(root->val);
    solve(root->right, st);
}

bool findTarget(TreeNode *root, int k)
{
    set<int> st;
    solve(root, st);
    for (auto it : st)
    {
        int num1 = it;
        int other = k - num1;
        if (other != num1 && st.find(other) != st.end())
            return 1;
    }
    return 0;
}

int main()
{

    return 0;
}