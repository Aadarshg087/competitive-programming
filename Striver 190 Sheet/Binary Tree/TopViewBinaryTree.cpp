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
};

void solveRight(Node *root, set<int> &st, vector<int> &ans, int col)
{
    if (root == NULL)
        return;

    if (st.find(col) == st.end())
    {
        ans.push_back(root->data);
        st.insert(col);
    }
    solveRight(root->right, st, ans, col + 1);
}

void solveLeft(Node *root, set<int> &st, vector<int> &ans, int col)
{
    if (root == NULL)
        return;

    if (st.find(col) == st.end())
    {
        ans.push_back(root->data);
        st.insert(col);
    }
    solveLeft(root->left, st, ans, col - 1);
}

vector<int> topView(Node *root)
{
    vector<int> ans;
    set<int> st;
    solveLeft(root->left, st, ans, -1);
    st.insert(0);
    ans.push_back(root->data);
    solveRight(root->right, st, ans, 1);
    return ans;
}
int main()
{

    return 0;
}