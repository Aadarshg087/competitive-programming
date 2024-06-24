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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    // *TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
};

// Approach
/*
- First of all, very good problem from the implementation perspective
- Really force you select the STL according to the needs
- We are doing level order traversal and storing and col as key and row as key nested map
- Also, we have used the multiset to keep the elements sorted if they lie in the same col and row
- In the end, transferred all the elements for each col multiset in one vector and added it to the ans
T.C - O(nlogn)
S.C - O(n)
*/
vector<vector<int>> verticalTraversal(TreeNode *root)
{
    queue<pair<TreeNode *, pair<int, int>>> q;
    map<int, map<int, multiset<int>>> mp; // col -> row -> elements
    q.push({root, {0, 0}});
    while (!q.empty())
    {
        auto curr = q.front();
        TreeNode *node = curr.first;
        int val = curr.first->val;
        int col = curr.second.first;
        int row = curr.second.second;
        mp[col][row].insert(val); // O(nlogn)
        q.pop();
        if (node->left)
        {
            q.push({node->left, {col - 1, row + 1}});
        }
        if (node->right)
        {
            q.push({node->right, {col + 1, row + 1}});
        }
    }

    vector<vector<int>> ans;
    for (auto it : mp) // col, {row, mulitset}
    {
        vector<int> temp;
        for (auto i : it.second) // row, multiset
        {
            for (auto ip : i.second) // multiset
            {
                temp.push_back(ip);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{

    return 0;
}