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

// My first approach
int solve(TreeNode *root, long long int &maxi)
{
    if (root == NULL)
        return 0;
    int l = 0;
    int r = 0;
    l = solve(root->left, maxi);
    r = solve(root->right, maxi);

    maxi = max({maxi, 1LL * l + r + root->val, 1LL * root->val, 1LL * l + root->val, 1LL * r + root->val});

    return max(max(l, r) + root->val, root->val);
}
int maxPathSum(TreeNode *root)
{
    long long int maxi = INT_MIN;
    solve(root, maxi);
    return (int)maxi;
}

// Approach
/*
- Approach is very intuitive, you have only take care of the negative values 
- SO, very good implementation is here by using max(0, solve()) just make sure we are only taking the positive values from the branchs and adding the node values into it
T.C - O(n)
S.C - O(n)
- 
*/
int solve(TreeNode *root, int &maxi)
{
    // Base case
    if (root == NULL)
        return 0;

    // Recurrence Relation
    int l = max(0, solve(root->left, maxi));
    int r = max(0, solve(root->right, maxi));

    maxi = max(maxi, l + r + root->val);
    return max(l, r) + root->val;
}
int maxPathSum(TreeNode *root)
{
    int maxi = INT_MIN;
    solve(root, maxi);
    return maxi;
}

int main()
{

    return 0;
}