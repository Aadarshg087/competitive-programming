#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Not done by me, not in my comfort zone yet

void makeGraph(unordered_map<int, vector<int>> &adj, int parent, TreeNode *curr)
{
    if (curr == NULL)
    {
        return;
    }

    if (parent != -1)
    {
        adj[curr->val].push_back(parent);
    }

    if (curr->left)
    {
        adj[curr->val].push_back(curr->left->val);
    }

    if (curr->right)
    {
        adj[curr->val].push_back(curr->right->val);
    }

    makeGraph(adj, curr->val, curr->left);
    makeGraph(adj, curr->val, curr->right);
}

int amountOfTime(TreeNode *root, int start)
{
    unordered_map<int, vector<int>> adj;
    makeGraph(adj, -1, root);

    // BFS
    queue<int> que;
    unordered_set<int> visited;
    que.push(start);
    visited.insert(start);

    int minutes = 0;
    while (que.empty() == false)
    {
        int n = que.size();
        while (n--)
        {
            int curr = que.front();
            que.pop();
            for (auto &ng : adj[curr])
            {
                if (visited.find(ng) == visited.end())
                {
                    que.push(ng);
                    visited.insert(ng);
                }
            }
        }
        minutes++;
    }

    return minutes - 1;
}

int main()
{

    return 0;
}