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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    q.push(root);
    bool c = 1;
    while (1)
    {
        queue<TreeNode *> child;
        vector<int> temp;
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            temp.push_back(curr->val);
            q.pop();
            if (curr->left)
                child.push(curr->left);
            if (curr->right)
                child.push(curr->right);
        }
        if (c)
            c = 0;
        else
        {
            reverse(temp.begin(), temp.end());
            c = 1;
        }
        ans.push_back(temp);
        if (child.empty())
            break;
        q = child;
    }
    return ans;
}

int main()
{

    return 0;
}