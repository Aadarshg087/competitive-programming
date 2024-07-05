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
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void solve(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    solve(root->left, v);
    v.push_back(root->data);
    solve(root->right, v);
}

int kthLargest(Node *root, int k)
{
    vector<int> v;
    solve(root, v);
    reverse(v.begin(), v.end());
    return v[k - 1];
}

int main()
{

    return 0;
}