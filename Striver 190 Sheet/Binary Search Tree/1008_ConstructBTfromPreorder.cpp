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
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

void solve(int &i, vector<int> &preorder, TreeNode *root, int mini, int maxi)
{

    // Base case
    if (i == preorder.size())
        return;

    // Recurrence Relation
    int curr = preorder[i];
    if (curr < root->val && curr > mini)
    {
        TreeNode *newNode = new TreeNode(preorder[i]);
        root->left = newNode;
        i++;
        solve(i, preorder, root->left, mini, root->val);
    }
    if (i < preorder.size() && curr > root->val && curr < maxi)
    {
        TreeNode *newNode = new TreeNode(preorder[i]);
        root->right = newNode;
        i++;
        solve(i, preorder, root->right, root->val, maxi);
    }
}

TreeNode *bstFromPreorder(vector<int> &preorder)
{
    int i = 1;
    int maxi = INT_MAX;
    int mini = INT_MIN;
    TreeNode *head = new TreeNode(preorder[0]);
    TreeNode *temp = head;
    solve(i, preorder, temp, mini, maxi);
    return head;
}

int main()
{

    return 0;
}