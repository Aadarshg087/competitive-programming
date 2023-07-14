#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

void PrintTreeLevelWise(BinaryTreeNode<int> *root)
{
    // if (root == NULL)
    // {
    //     return;
    // }
    // cout << root->data << ":";
    // if (root->left == NULL)
    // {
    //     cout << "L:" << -1 << ",";
    // }
    // else
    // {
    //     cout << "L:" << root->left->data << ",";
    // }
    // if (root->right == NULL)
    // {
    //     cout << "R:" << -1 << endl;
    // }
    // else
    // {
    //     cout << "R:" << root->right->data << endl;
    // }
    // PrintTreeLevelWise(root->left);
    // PrintTreeLevelWise(root->right);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        cout << front->data << ":";

        if (front->left != NULL)
        {
            BinaryTreeNode<int> *leftChild = front->left;
            pendingNodes.push(leftChild);
            cout << "L:" << front->left->data << ",";
        }
        else
        {
            cout << "L:" << -1 << ",";
        }
        if (front->right != NULL)
        {
            BinaryTreeNode<int> *rightChild = front->right;
            pendingNodes.push(rightChild);
            cout << "R:" << front->right->data << endl;
        }
        else
        {
            cout << "R:" << -1 << endl;
        }
        pendingNodes.pop();
    }
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Data: " << endl;
    cin >> rootData;
    if (rootData == -1)
        return NULL;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;
    return root;
}

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int leftChild;
        cout << "Enter left child of " << front->data << ": ";
        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftChildData = new BinaryTreeNode<int>(leftChild);
            front->left = leftChildData;
            pendingNodes.push(leftChildData);
        }

        int rightChild;
        cout << "Enter right child of " << front->data << ": ";
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightChildData = new BinaryTreeNode<int>(rightChild);
            front->right = rightChildData;
            pendingNodes.push(rightChildData);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root;
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;

    // root = takeInput();
    root = takeInputLevelWise();
    // printTree(root);

    PrintTreeLevelWise(root);
    delete root;

    return 0;
}