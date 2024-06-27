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
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return 1;
    if (p && !q || !p && q)
        return 0;
    if (p->left && !q->left || !p->left && q->left)
        return 0;

    if (p->right && !q->right || !p->right && q->right)
        return 0;

    if (p->val != q->val)
        return 0;

    return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}

int main()
{

    return 0;
}