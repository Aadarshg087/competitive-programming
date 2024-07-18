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
        right = NULL;
        left = NULL;
    }
};

// T.C - O(n)
// S.C - O(logn)

TreeNode *solve(vector<int> &nums, int left, int right)
{
    // Base case
    if (left > right)
        return NULL;

    // Recurrence Relation
    int mid = (left + right) >> 1;
    TreeNode *newNode = new TreeNode(nums[mid]);
    TreeNode *l = solve(nums, left, mid - 1);
    TreeNode *r = solve(nums, mid + 1, right);
    newNode->left = l;
    newNode->right = r;
    return newNode;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;
    return solve(nums, left, right);
}

int main()
{

    return 0;
}