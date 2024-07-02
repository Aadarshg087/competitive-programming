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

// Appraoch 1
void solve(TreeNode *root, TreeNode *&prev)
{
    if (root == NULL)
        return;

    solve(root->right, prev);
    solve(root->left, prev);

    root->right = prev;
    root->left = NULL;
    prev = root;
}

void flatten(TreeNode *root)
{
    TreeNode *prev = NULL;
    solve(root, prev);
}

// Approach 2

void flatten(TreeNode *root)
{
    if (root == NULL)
        return;
    stack<TreeNode *> st;
    st.push(root);
    TreeNode *prev = NULL;
    while (!st.empty())
    {
        TreeNode *curr = st.top();
        st.pop();
        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);

        curr->right = st.top();
        curr->left = NULL;
    }
}

void flatten(TreeNode *root)
{
    TreeNode *curr = root;
    TreeNode *prev = NULL;
    while (curr != NULL)
    {
        if (curr->left)
        {
            prev = curr->left;
            while (prev->right)
                prev = prev->right;

            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}
int main()
{

    return 0;
}