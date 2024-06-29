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
- We have used divide conquer kinda approach
- Then, the while game is of correclty adjusting the pointers in the function call
- Just know, that first a element from right side(excluding last element) in postorder will be right subtree and remaining elements before this section will be left subtree
- Carefully Observe the pointer variables in the function calls.
T.C - O(n)
S.C - O(n)
*/

TreeNode *buildTreeNow(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd, map<int, int> &mp)
{
    // Base case
    if (postStart > postEnd || inStart > inEnd)
        return NULL;

    // Recurrence Relation
    TreeNode *root = new TreeNode(postorder[postEnd]);
    int inRoot = mp[root->val];
    int numsLeft = inRoot - inStart;

    root->left = buildTreeNow(inorder, inStart, inRoot - 1, postorder, postStart, postStart + numsLeft - 1, mp);
    root->right = buildTreeNow(inorder, inRoot + 1, inEnd, postorder, postStart + numsLeft, postEnd - 1, mp);
    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() != postorder.size())
        return NULL;
    map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
        mp[inorder[i]] = i;

    return buildTreeNow(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mp);
}

int main()
{

    return 0;
}