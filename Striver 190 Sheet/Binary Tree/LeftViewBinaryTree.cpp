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

/*
- Misunderstood the question in the first try and took many attempts to understand the question



*/
void solve(Node *root, vector<int> &ans, set<int> &st, int level)
{
    if (root == NULL)
        return;
    if (st.empty() || level > *st.rbegin())
    {
        ans.push_back(root->data);
        st.insert(level);
    }
    if (root->left)
        solve(root->left, ans, st, level + 1);

    if (root->right)
        solve(root->right, ans, st, level + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    set<int> st;
    solve(root, ans, st, 1);
    return ans;
}

int main()
{

    return 0;
}