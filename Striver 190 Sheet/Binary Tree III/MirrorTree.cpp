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

void solve(Node *root, Node *temp)
{
    // Base case
    if (!root->left && !root->right)
        return;

    // Recurrece Relation
    if (root->left)
    {
        Node *newNode = new Node(root->left->data);
        temp->left = newNode;
        solve(root->left, temp->left);
    }
    if (root->right)
    {
        Node *newNode = new Node(root->right->data);
        temp->right = newNode;
        solve(root->right, temp->right);
    }
}
void printInorder(Node *root)
{
    if (root == NULL)
        return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
void flip(Node *temp)
{
    if (temp == NULL)
        return;

    // swap(temp->left, temp->right);
    Node *l = temp->left;
    temp->left = temp->right;
    temp->right = l;

    flip(temp->left);
    flip(temp->right);
}

void mirror(Node *root)
{
    if (root == NULL)
        return;

    Node *temp = new Node(root->data);
    solve(root, temp);
    flip(temp);
    root = temp;
}

// Approach
/*
- Simply to every node and swap the position of tis children
- Just take case of the base case
- That's it
T.C - O(n)
S.C - O(n)
*/
void solve(Node *root)
{
    if (root == NULL || !root->right && !root->left)
        return;

    swap(root->left, root->right);
    solve(root->left);
    solve(root->right);
};

void mirror(Node *root)
{
    if (root == NULL)
        return;
    solve(root);
}

int main()
{

    return 0;
}