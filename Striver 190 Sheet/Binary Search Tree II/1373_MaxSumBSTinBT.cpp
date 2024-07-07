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

/*
- We construct the structure so that we can track the values at every node
- Main concept is : the left subtree of fevery node, the maxValue should be less than the node->val
and right subtree of every node, the minValue should be more that the node value
- Initially we the maxNode and minNode as optimal as possible so leaf node comes out to be valid BST
- As we come up from the bottom of the tree, we will check the maxNode of left and minNode of right
- if true, will send the updated value
- otherwise , there is no point in checking the above tree as lowest tree is not a BST, so we sent the worst value to pass the valid BST condition (main point)
T.C - O(n)
S.C - O(1)
*/
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
// isBST, sum
Node solve(TreeNode *root, int &ans)
{
    // Base case
    if (root == NULL)
    {
        return Node(INT_MIN, INT_MAX, 0);
    }

    // Recurrence Relation
    Node l = solve(root->left, ans);
    Node r = solve(root->right, ans);

    if (l.maxNode < root->val && r.minNode > root->val)
    {
        ans = max(ans, root->val + l.maxSum + r.maxSum);
        int maxi = max({l.maxNode, r.maxNode, root->val});
        int mini = min({l.minNode, r.minNode, root->val});
        return Node(maxi, mini, root->val + l.maxSum + r.maxSum);
    }           // left  right
    return Node(INT_MAX, INT_MIN, 0);
}

int maxSumBST(TreeNode *root)
{
    int ans = 0;
    solve(root, ans);
    return ans;
}

int main()
{

    return 0;
}