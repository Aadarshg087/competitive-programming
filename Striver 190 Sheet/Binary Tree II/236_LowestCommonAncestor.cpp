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

// BASIC BRUTE FORCE APPROACH
/*
- Basic will derive all the paths into that contain our element in vector
- So, we will recieve 2 vector and we can compare the values and last same values will be our answer
T.C- O(2N)
S.C - O(2N)
*/
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
}

// OPTIMAL APPROACH
/*
- We will do the simple DFS traversal and look for our nodes in the tree
- The moment we receive any nodes we will simply return that node from that point
- At any point, we we will return the not null values, and if both left and right values are not null, we will return the root
T.C - O(N)
S.C - O(N)
*/
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL || root == p || root == q)
        return root;

    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    else
        return root;
}

int main()
{

    return 0;
}