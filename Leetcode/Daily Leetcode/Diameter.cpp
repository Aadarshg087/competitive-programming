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

int solve(TreeNode *root, int &diameter)
{
    // Base condition

    // Recurrence relation
    int ans1 = 0;
    int ans2 = 0;
    if (root->left != NULL)
        ans1 = 1 + solve(root->left, diameter);
    if (root->right != NULL)
        ans2 = 1 + solve(root->right, diameter);

    if (ans1 + ans2 > diameter)
    {
        diameter = ans1 + ans2;
    }
    return max(ans1, ans2);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int diameter = 0;
    solve(root, diameter);
    return diameter;
}

int main()
{

    return 0;
}