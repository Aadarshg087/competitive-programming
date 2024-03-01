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
class TreeNode
{
public:
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int val)
    {
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

// Preorder Traversal
void TraversalDFS(TreeNode *root)
{
    // Base case
    cout << root->val << " ";
    if (!root->left && !root->right)
        return;

    // Relation
    if (root->left)
        TraversalDFS(root->left);
    if (root->right)
        TraversalDFS(root->right);
}

// Inorder Traversal
void TraversalDFS(TreeNode *root)
{
    // Base case
    if (root == NULL)
        return;
    // Relation
    TraversalDFS(root->left);
    cout << root->val << " ";
    TraversalDFS(root->right);
}

// PostOrder Traversal
void TraversalDFS(TreeNode *root)
{
    // Base case
    if (root == NULL)
        return;
    // Relation
    TraversalDFS(root->left);
    TraversalDFS(root->right);
    cout << root->val << " ";
}

// Using BFS
void TreversalBFS(TreeNode *root)
{
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty())
    {
        TreeNode *node = que.front();
        cout << node->val << endl;
        que.pop();
        if (node->left)
            que.push(node->left);
        if (node->right)
            que.push(node->right);
    }
}

void input(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    input(v);

    return 0;
}