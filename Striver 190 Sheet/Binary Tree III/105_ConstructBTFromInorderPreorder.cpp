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
    TreeNode(int val)
    {
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

// Approach
/*
- We have used the approach similar to divide and conquer.
- We have used the map for efficient retrival of indexes of desired element
- Through that, we can segregate the left and right part of the tree and make function calls accrodignly
- Make sure to carefully pass the function call, and values in it butotherwise it is prettly simple
T.C - O(n)
S.C - O(n)
*/

TreeNode *buildTreeNow(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &mp)
{
    // Base case
    if (preStart > preEnd || inStart > inEnd)
        return NULL;

    // Recurrence Relation
    TreeNode *root = new TreeNode(preorder[preStart]);
    int inRoot = mp[root->val];
    int numsLeft = inRoot - inStart;
    root->left = buildTreeNow(preorder, preStart + 1, preStart + numsLeft, inorder, inStart, inRoot - 1, mp);
    root->right = buildTreeNow(preorder, preStart + numsLeft + 1, preEnd, inorder, inRoot + 1, inEnd, mp);
    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
    {
        mp[inorder[i]] = i;
    }

    return buildTreeNow(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
}

int main()
{

    return 0;
}