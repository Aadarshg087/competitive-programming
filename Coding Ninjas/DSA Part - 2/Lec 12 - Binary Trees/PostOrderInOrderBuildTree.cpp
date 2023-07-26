#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }

    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode<int> *buildTreeHelper(int *postorder, int *inorder, int postS, int postE, int inS, int inE)
{
    if (inS > inE)
    {
        return NULL;
    }

    int rootIndex = 0;
    for (int i = 0; i <= inE; i++)
    {
        if (postorder[postE] == inorder[i])
        {
            rootIndex = i;
            break;
        }
    }

    int rootData = postorder[postE];
    int lpostS = postS;
    int rInS = rootIndex + 1;
    int rInE = inE;
    int rpostE = postE - 1;
    int rpostS = rInS - rInE + rpostE;
    int lpostE = rpostS - 1;
    int lInS = inS;
    int lInE = rootIndex - 1;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(postorder, inorder, lpostS, lpostE, lInS, lInE);
    root->right = buildTreeHelper(postorder, inorder, rpostS, rpostE, rInS, rInE);
    return root;
}

BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
    buildTreeHelper(postorder, inorder, 0, postLength - 1, 0, inLength - 1);
}
int main()
{

    return 0;
}