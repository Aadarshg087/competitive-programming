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

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;
};

Node *connect(Node *root)
{
    // BFS
    if (root == NULL)
        return root;
    queue<Node *> q;
    q.push(root);
    while (1)
    {
        queue<Node *> child;
        while (!q.empty())
        {
            auto node = q.front();
            q.pop();
            (q.size() >= 1) ? node->next = q.front() : node->next = NULL;
            if (node->left)
            {
                child.push(node->left);
            }
            if (node->right)
            {
                child.push(node->right);
            }
        }
        q = child;
        if (child.empty())
        {
            break;
        }
    }
    return root;
}

int main()
{

    return 0;
}