#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *right;
    BinaryTreeNode *left;

    BinaryTreeNode(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

int heightleft(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int h = 1 + heightleft(root->left);
    return h;
}
int heightright(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int h = 1 + heightright(root->right);
    return h;
}

int BinaryDiameter(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = heightleft(root->left);
    int rightHeight = heightright(root->right);
    int dia = leftHeight + rightHeight;
    int maximum = max(dia, leftHeight);

    BinaryDiameter(root->left);
    BinaryDiameter(root->right);
}

int main()
{

    return 0;
}