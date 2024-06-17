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
    int data;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

TreeNode *constructTreeBFS(vector<char> &v)
{
    TreeNode *root = new TreeNode(v[0] - '0');
    int i = 1;
    queue<TreeNode *> que;
    int n = v.size();
    que.push(root);
    while (!que.empty() && i < n)
    {
        TreeNode *front = que.front();
        que.pop();
        if (i < n && v[i] != '#')
        {
            TreeNode *newNode = new TreeNode(v[i] - '0');
            que.push(newNode);
            front->left = newNode;
        }
        i++;
        if (i < n && v[i] != '#')
        {
            TreeNode *newNode = new TreeNode(v[i] - '0');
            que.push(newNode);
            front->right = newNode;
        }
        i++;
    }

    return root;
}

void printTree(TreeNode *root)
{
    //  Base case
    if (root == NULL)
        return;

    // Printing the current node
    cout << root->data << ": ";
    if (root->left)
        cout << root->left->data << " ";
    else
        cout << "  ";

    if (root->right)
        cout << root->right->data << endl;
    else
        cout << "  " << endl;

    // Recurrence relation
    if (root->left)
        printTree(root->left);

    if (root->right)
        printTree(root->right);
}

int main()
{
    // BFS
    vector<char> v{'1', '2', '3', '4', '5', '6', '7', '#', '#', '8', '#', '#', '#', '#', '#'};
    TreeNode *root = constructTreeBFS(v);
    printTree(root);

    return 0;
}