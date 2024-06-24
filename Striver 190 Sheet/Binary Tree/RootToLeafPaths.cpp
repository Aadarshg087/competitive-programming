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

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Basic Approach
/*
- Basic Traversal using DFS and storing the values along the way
- As soon as we encounter the leaf node. We will insert the temp vector into our ans matrix
- Which we have found one path from root to leaf node
T.C - O(2^N)
S.C - O(N)
*/

void solve(Node *root, vector<vector<int>> &ans, vector<int> temp)
{
    // Base case
    temp.push_back(root->data);
    if (!root->left && !root->right)
    {
        ans.push_back(temp);
        return;
    }
    // Recurrence Realtion
    if (root->left)
        solve(root->left, ans, temp);
    if (root->right)
        solve(root->right, ans, temp);
}

vector<vector<int>> Paths(Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    vector<int> temp;
    solve(root, ans, temp);
    return ans;
}

int main()
{

    return 0;
}