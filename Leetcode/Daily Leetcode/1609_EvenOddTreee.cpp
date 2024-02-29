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

// Using DFS
bool isEvenOddTree(TreeNode *root)
{
}

// using BFS
bool isEvenOddTree(TreeNode *root)
{
    queue<TreeNode *> que;
    int level = 0;
    que.push(root);
    while (true)
    {
        queue<TreeNode *> q;
        int lastVal = INT_MIN;
        while (!que.empty())
        {
            TreeNode *node = que.front();
            que.pop();
            cout << node->val << " ";
            if (level & 1)
            {
                if (node->val & 1)
                {
                    return false;
                }
                if (lastVal != INT_MIN && lastVal <= node->val)
                {
                    return false;
                }
                lastVal = node->val;
            }
            else
            {
                if ((node->val & 1) == 0)
                {
                    return false;
                }
                if (lastVal != INT_MIN && lastVal >= node->val)
                {
                    return false;
                }
                lastVal = node->val;
            }

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        cout << endl;
        level++;
        if (q.empty())
            break;
        que = q;
    }
    return true;
}

bool isEvenOddTree(TreeNode *root)
{
    int level = 0;
    queue<TreeNode *> que;
    que.push(root);
    if (root->val & 1 == 0)
        return false;
    int lastVal = INT_MIN;
    while (!que.empty())
    {
        TreeNode *node = que.front();
        que.pop();
        if (level & 1)
        {
            // if (node->val & 1 == 1)
            //     return false;
            if (node->left)
            {
                if (node->left->val & 1 == 0)
                    return false;
                if (lastVal != INT_MIN && node->left->val <= lastVal)
                    return false;
                que.push(node->left);
                lastVal = node->left->val;
            }
            if (node->right)
            {
                if (node->right->val & 1 == 0)
                    return false;
                if (lastVal != INT_MIN && node->right->val <= lastVal)
                    return false;
                que.push(node->right);
                lastVal = node->right->val;
            }
        }
        else
        {
            // if (node->val & 1 == 0)
            //     return false;
            if (node->left)
            {
                if (node->left->val & 1)
                    return false;
                if (lastVal != INT_MIN && node->left->val >= lastVal)
                    return false;
                que.push(node->left);
                lastVal = node->left->val;
            }
            if (node->right)
            {
                if (node->right->val & 1)
                    return false;

                if (lastVal != INT_MIN && node->right->val >= lastVal)
                    return false;
                que.push(node->right);
                lastVal = node->right->val;
            }
        }
        lastVal = INT_MIN;
        level++;
    }
    return true;
}

int main()
{

    return 0;
}