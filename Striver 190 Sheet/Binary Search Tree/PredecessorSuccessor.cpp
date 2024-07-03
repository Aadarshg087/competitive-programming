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
    int key;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};
void solve(Node *root, Node *&pre, Node *&suc, int key)
{
    // base case
    if (root == NULL)
        return;

    // Recurrence Relation

    pre = root;
    solve(root->left, pre, suc, key);
    solve(root->right, pre, suc, key);
    if (root->key > key)
    {
        root = root;
        return;
    }
}

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    solve(root, pre, suc, key);
}

int main()
{

    return 0;
}