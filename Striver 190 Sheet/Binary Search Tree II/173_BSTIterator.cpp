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

// Basic Concept
/*
- Used stack to store the left values of the tree as w down the path
- So now the top values will be min values(last inserted)
- once we remove the element we will look for the right subtree of that node
- There could be a possibility, there exists right nodes which are less than the above tree(we are doing inorder traversal)
T.C - O(1)
S.C - O(H)

*/

class BSTIterator
{
public:
    stack<TreeNode *> myStack;
    BSTIterator(TreeNode *root)
    {
        pushNode(root);
    }

    int next()
    {
        TreeNode *temp = myStack.top();
        myStack.pop();
        pushNode(temp->right);
        return temp->val;
    }

    bool hasNext()
    {
        return !myStack.empty();
    }

    void pushNode(TreeNode *root)
    {
        while (root != NULL)
        {
            myStack.push(root);
            root = root->left;
        }
    }
};

int main()
{

    return 0;
}