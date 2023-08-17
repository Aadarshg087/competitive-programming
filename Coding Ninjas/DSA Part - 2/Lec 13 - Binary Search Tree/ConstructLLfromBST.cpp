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

int MaxElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    int temp = max(root->data, max(MaxElement(root->left), MaxElement(root->right)));

    return temp;
}
int MinElement(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    int temp = min(root->data, min(MinElement(root->left), MinElement(root->right)));

    return temp;
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    constructLinkedList(root->left);
    constructLinkedList(root->right);

    int leftMax = MaxElement(root->left);
    int rightMin = MinElement(root->right);

    Node<int> *newNode = new Node<int>(root->data);
    Node<int> *leftMaxNode = new Node<int>(leftMax);
    Node<int> *rightMinNode = new Node<int>(rightMin);

    leftMaxNode->next = newNode;
    newNode->next = rightMinNode;
}

Node<int> *leftSubTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        Node<int> *newNode = new Node<int>(root->data);
        return newNode;
    }

    Node<int> *temp1 = leftSubTree(root->left);
    Node<int> *temp2 = rightSubTree(root->right);
    Node<int> *newNode = new Node<int>(root->data);

    temp1->next = newNode;
    newNode->next = temp2;
}

Node<int> *rightSubTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        Node<int> *newNode = new Node<int>(root->data);
        return newNode;
    }

    Node<int> *temp1 = leftSubTree(root->left);
    Node<int> *temp2 = rightSubTree(root->right);
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        Node<int> *newNode = new Node<int>(root->data);
        return newNode;
    }
    pair<int *, int *> p;
}

int main()
{

    return 0;
}