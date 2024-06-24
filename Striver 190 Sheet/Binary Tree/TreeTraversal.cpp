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
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

// Appraoch
/*
- While traversing make sure to keep the function type as void and temp vector as thourgh address to store
- Only keep one check if(root == NULL) and make all the function calls
- Adjust inserting of elements into the temp vector according the traversal type
T.C - O(n) // not confirm
S.C - O(n) // not confirm

*/

void inOrder(TreeNode *root, vector<int> &temp)
{
    // Base case
    if (root == NULL)
        return;
    // Recurrence Relation
    inOrder(root->left, temp);
    temp.push_back(root->data);
    inOrder(root->right, temp);
}

void preOrder(TreeNode *root, vector<int> &temp)
{
    // Base case
    if (root == NULL)
        return;
    // Recurrence Relation
    temp.push_back(root->data);
    preOrder(root->left, temp);
    preOrder(root->right, temp);
}

void postOrder(TreeNode *root, vector<int> &temp)
{
    // Base case
    if (root == NULL)
        return;
    // Recurrence Relation
    postOrder(root->left, temp);
    postOrder(root->right, temp);
    temp.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    // Write your code here.
    vector<vector<int>> ans;
    // inOrder
    vector<int> temp;
    inOrder(root, temp);
    ans.push_back(temp);
    temp.clear();

    // preOrder
    preOrder(root, temp);
    ans.push_back(temp);
    temp.clear();

    // postOrder
    postOrder(root, temp);
    ans.push_back(temp);
    return ans;
}

int main()
{

    return 0;
}