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

// Basic Approach
void solve(Node *root, vector<Node *> &v)
{
    // base case
    if (root == NULL)
        return;

    // Recurrence Relation

    solve(root->left, v);
    v.push_back(root);
    solve(root->right, v);
}

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    vector<Node *> v;
    solve(root, v);
    for (auto i : v)
    {
        if (i->key < key)
            pre = i;
        else if (i->key > key)
        {
            suc = i;
            break;
        }
    }
}

// Second Apprach
/*



T.C - O(H)
S.C - O(1)
*/

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    // Successor
    Node *temp = root;
    while (temp != NULL)
    {
        if (temp->key <= key)
        {
            temp = temp->right;
        }
        else
        {
            suc = temp;
            temp = temp->left;
        }
    }

    // predecessor
    temp = root;
    while ((temp != NULL))
    {
        if (temp->key >= key)
        {
            temp = temp->left;
        }
        else
        {
            pre = temp;
            temp = temp->right;
        }
    }
}

int main()
{

    return 0;
}