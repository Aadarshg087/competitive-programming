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
/*
- Made function call on left and right subtree with inorder traversal and stored the values into it
- Made some changes in the right function call according the left function call
- In the end, returned the camparison of the vector as bool output
T.C - O(n)
S.C - O(n / 2) + O(n / 2) = O(n) + O(n) for function calls
*/
void solve2(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(101);
        return;
    }
    v.push_back(root->val);
    solve2(root->right, v);
    solve2(root->left, v);
}
void solve1(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(101);
        return;
    }
    v.push_back(root->val);
    solve1(root->left, v);
    solve1(root->right, v);
}
bool isSymmetric(TreeNode *root)
{
    vector<int> l;
    solve1(root->left, l);
    vector<int> r;
    solve2(root->right, r);
    return l == r;
}

// Better Approach
/*
- Nice approach. Key idea is to notice how are comparing the simultaneou elements in the function call
- Check the base condiion, it handles the one null and other being not null edge case
T.C - O(n)
S.C - O(n)
*/
bool solve(TreeNode *left, TreeNode *right)
{
    if (left == NULL || right == NULL)
        return left == right;

    if (left->val != right->val)
        return 0;

    return solve(left->left, right->right) && solve(left->right, right->left);
}

bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
        return 1;
    return solve(root->left, root->right);
}

int main()
{

    return 0;
}