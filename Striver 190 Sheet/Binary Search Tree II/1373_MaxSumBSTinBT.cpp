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

// Basic Approach
/*
- We could go to every node and check for the particular tree whether it is BST or not,
- If yes, then we could calc the sum and store it
- Similarly, we could do this for all the other BST in BT and look for the max Sum as asked in the problem
T.C - O(N) * O(K) where k are no of nodes in the subtree = O(N^2)
S.C - O(K)

*/
// Code here

// Better Approach
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Node
{
public:
    int maxNode = INT_MIN;
    int minNode = INT_MAX;
    int maxSum = INT_MIN;
    Node(int a, int b, int c)
    {
        maxNode = a;
        minNode = b;
        maxSum = c;
    }
};
Node maxSumHelper(TreeNode *root)
{
    if (!root)
    {
        return Node(INT_MIN, INT_MAX, 0);
    }

    Node l = maxSumHelper(root->left);
    Node r = maxSumHelper(root->right);
    // check for BST
    if (l.maxNode < root->val < r.minNode)
    {
        return Node(max(l.maxNode, root->val), min(r.minNode, root->val), l.maxSum + r.maxSum + root->val);
    }

    return Node(INT_MIN, INT_MAX, max(l.maxSum, r.maxSum));
}

int maxSumBST(TreeNode *root)
{
    return maxSumHelper(root).maxSum;
}

int main()
{

    return 0;
}