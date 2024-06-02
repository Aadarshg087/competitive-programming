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

void solve(Node *root, vector<int> &ans, set<int> &st, int level)
{
    st.insert(level);
    // Base case
    if (root == NULL)
        return;
    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
        return;
    }

    // recurrence relation
    solve(root->left, ans, st, level - 1);

    if (!root->left->left && !root->left->right && !root->right->left && !root->right->right)
    {
        ans.push_back(root->data);
    }

    if (root->left && !root->right && st.find(level) == st.end())
        ans.push_back(root->data);
    if (!root->left && root->right && st.find(level) == st.end())
        ans.push_back(root->data);
    solve(root->right, ans, st, level + 1);
}

vector<int> bottomView(Node *root)
{
    vector<int> ans;
    set<int> st;
    st.insert(0);
    solve(root, ans, st, 0);
    return ans;
}

int main()
{

    return 0;
}