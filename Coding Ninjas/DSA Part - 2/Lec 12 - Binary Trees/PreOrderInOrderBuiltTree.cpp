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

BinaryTreeNode<int> *buildTreeHelper(int *preorder, int *inorder, int preS, int preE, int inS, int inE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootIndex = 0;
    for (int i = 0; i <= inE; i++)
    {
        if (preorder[preS] == inorder[i])
        {
            rootIndex = i;
            break;
        }
    }

    int rootData = preorder[preS];
    int lInS = inS;
    int lInE = rootIndex - 1;
    int lPreS = preS + 1;
    int lPreE = lInE - lInS + lPreS;
    int rPreS = lPreS + 1;
    int rPreE = preE;
    int rInS = rootIndex + 1;
    int rInE = inE;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(preorder, inorder, lPreS, lPreE, lInS, lInE);
    root->right = buildTreeHelper(preorder, inorder, rPreS, rPreE, rInS, rInE);

    return root;
}

BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    buildTreeHelper(preorder, inorder, 0, preLength - 1, 0, inLength - 1);
}

int main()
{

    return 0;
}