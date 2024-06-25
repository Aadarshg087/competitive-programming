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

// Approach
/*
- Basic BFS on a tree, we are keeping queue of node and col and map of col and node
- Queue is used for Level order traversal from top to bottom and upate the any new element found later in the same col
- The edge case(two element in the same spot- same col & same height/row) will also be handled as we traversing from left to right and we have to pick the right most element if there is clash(given in the question)
- since map will keep col sorted and we can simply deduce the element from each col
T.C - O(n)
S.C - O(n)
*/
vector<int> bottomView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, Node *> mp;
    queue<pair<Node *, int>> q;

    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
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