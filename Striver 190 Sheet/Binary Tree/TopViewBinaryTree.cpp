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

// Approach
/*
- Basic BFS on a tree, we are keeping queue of node and col and if we encountering that col first time
- Simpley insert in the map that's it. Otherwise, ignore
- This will make sure the first element from the top will for aprticular col will be inserted only
T.C - O(n)
S.C - O(n)

*/

vector<int> topView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, Node *> mp;        // col, node
    queue<pair<Node *, int>> q; // node , col

    q.push({root, 0});
    mp[0] = root;
    while (!q.empty())
    {
        auto it = q.front();
        if (mp.find(it.second) == mp.end())
            mp[it.second] = it.first;
        q.pop();
        if (it.first->left)
            q.push({it.first->left, it.second - 1});
        if (it.first->right)
            q.push({it.first->right, it.second + 1});
    }

    for (auto it : mp)
    {
        ans.push_back(it.second->data);
    }
    return ans;
}

int main()
{

    return 0;
}