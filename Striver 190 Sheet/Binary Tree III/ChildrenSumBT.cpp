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

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

bool solve(Node *root)
{
    // Base case
    if (root == NULL || !root->left && !root->right)
        return 1;

    // Recurrence Relation
    int l = (root->left) ? root->left->data : 0;
    int r = (root->right) ? root->right->data : 0;

    if (l + r != root->data)
        return 0;
    return solve(root->left) && solve(root->right);
}

int isSumProperty(Node *root)
{
    return solve(root);
}

int main()
{

    return 0;
}