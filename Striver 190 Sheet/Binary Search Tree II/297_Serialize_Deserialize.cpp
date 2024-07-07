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
    TreeNode(int data)
    {
        val = data;
        right = NULL;
        left = NULL;
    }
};

// Approac

/*
Serialize
- We used a level order traversal, in which we have appended everything into string (NULL mapped to #)
- This will come handy while building the tree

Deserailize
- The main trick is to use stringstream lib which this whole code very easy
- we have use the queue for keep track of nodes and jump across the node rather the traversing
- any new node create is appended in the queue also
- # are handled sperately to insert NULL in the tree


T.C - O(n)
S.C - O(n);

*/

class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (root == NULL)
            return "";
        TreeNode *temp = root;
        queue<TreeNode *> q;
        q.push(temp);
        string ans = "";
        while (!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();
            if (f == NULL)
            {
                ans += "#,";
                continue;
            }
            ans += to_string(f->val);
            ans.push_back(',');
            if (f->left)
            {
                q.push(f->left);
            }
            else
                q.push(NULL);
            if (f->right)
            {
                q.push(f->right);
            }
            else
                q.push(NULL);
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        if (data.size() == 0)
            return NULL;

        stringstream ss(data);
        string s;
        getline(ss, s, ',');
        queue<TreeNode *> q;
        TreeNode *root = new TreeNode(stoi(s));
        q.push(root);
        while (!q.empty())
        {
            TreeNode *front = q.front();
            q.pop();
            getline(ss, s, ',');
            if (s != "#")
            {
                TreeNode *newNode = new TreeNode(stoi(s));
                front->left = newNode;
                q.push(newNode);
            }
            else
                front->left = NULL;

            getline(ss, s, ',');
            if (s != "#")
            {
                TreeNode *newNode = new TreeNode(stoi(s));
                front->right = newNode;
                q.push(newNode);
            }
            else
                front->right = NULL;
        }
        return root;
    }
};

int main()
{

    return 0;
}