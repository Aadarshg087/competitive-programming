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
    Node *left, *right;
};

// APPROACH
/*
- We have divided the approach in three parts
- We first inserting only the left side of the tree
- Then, only the leaf node using the inorder(left to right)
- Then, right side of the subtree in the reverse order
- Simply returning the ans vector
T.C - O(N)
S.C - O(N)
*/
bool isLeaf(Node *root)
{
    if (!root->left && !root->right)
        return true;
    return false;
}

void addLeftSubTree(Node *root, vector<int> &ans)
{
    Node *curr = root->left;
    while (curr)
    {
        if (!isLeaf(curr))
            ans.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addRightSubTree(Node *root, vector<int> &ans)
{
    Node *curr = root->right;
    vector<int> temp;
    while (curr)
    {
        if (!isLeaf(curr))
            temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    for (int i = temp.size() - 1; i >= 0; i--)
        ans.push_back(temp[i]);
}

void addLeafNode(Node *root, vector<int> &ans)
{
    if (isLeaf(root))
        ans.push_back(root->data);

    if (root->left)
        addLeafNode(root->left, ans);
    if (root->right)
        addLeafNode(root->right, ans);
}
vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    if (!isLeaf(root))
        ans.push_back(root->data);
    addLeftSubTree(root, ans);
    addLeafNode(root, ans);
    addRightSubTree(root, ans);
    return ans;
}

int main()
{

    return 0;
}