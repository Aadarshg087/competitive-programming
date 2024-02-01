#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {

        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int sumBT(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        int temp = root->data;
        root->data = 0;
        return temp;
    }

    int ans = 0;
    if (root->left != NULL)
    {
        ans += sumBT(root->left);
        // ans += root->left->data;
    }
    if (root->right != NULL)
    {
        ans += sumBT(root->right);
        // ans += root->right->data;
    }
    int temp = root->data;
    root->data = ans;
    return root->data + temp;
}
void toSumTree(TreeNode *root)
{
    // Your code here
    sumBT(root);
}

int main()
{

    return 0;
}