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
};

// Basic Approach
/*
- Use two for loop to traversal a level inpendently and insert thier children in the vector and child queue for futher traversal
- Adjust the insertion vector<int> into ans
T.C - O(n)
S.C - O(n)

*/

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    ans.push_back({root->val});
    while (1)
    {
        queue<TreeNode *> child;
        vector<int> temp;
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            cout << curr->val << endl;
            q.pop();
            if (curr->left)
            {
                temp.push_back(curr->left->val);
                child.push(curr->left);
            }

            if (curr->right)
            {
                temp.push_back(curr->right->val);
                child.push(curr->right);
            }
        }
        q = child;
        if (child.empty() == 1)
            break;
        if (!temp.empty())
            ans.push_back(temp);
    }

    return ans;
}

int main()
{

    return 0;
}