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
        this->left = NULL;
        this->right = NULL;
    }

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

void PrintTreeLevelWise(BinaryTreeNode<int> *root)
{
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

int main()
{

    return 0;
}