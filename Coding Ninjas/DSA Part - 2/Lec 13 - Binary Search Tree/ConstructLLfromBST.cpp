#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<int> *right;
    BinaryTreeNode<int> *left;

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

int inorderTraversal(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    inorderTraversal(root->left);
    return root->data;
    inorderTraversal(root->right);
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    constructLinkedList(root->left);
    Node<int> *newNode = new Node<int>(root->data);
    constructLinkedList(root->right);
}

int main()
{

    return 0;
}