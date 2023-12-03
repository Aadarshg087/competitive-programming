#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode *insert(BinaryTreeNode *&head, int x)
{
    if (head == NULL)
    {
        BinaryTreeNode *newNode = new BinaryTreeNode(x);
        head = newNode;
        return head;
    }
    if (head->data > x)
    {
        BinaryTreeNode *temp = insert(head->left, x);
        head->left = temp;
    }
    else
    {
        BinaryTreeNode *temp = insert(head->right, x);
        head->right = temp;
    }
}

void printTree(BinaryTreeNode *head)
{
    if (head == NULL)
        return;

    printTree(head->left);
    cout << head->data << " ";
    printTree(head->right);
}

void printChild(BinaryTreeNode *head, int value)
{
    if (head == NULL)
        return;
    if (value == head->data)
    {
        if (head->left != NULL && head->right != NULL)
        {
            cout << head->data << ": " << head->left->data << " " << head->right->data << endl;
        }
        else if (head->left == NULL && head->right != NULL)
        {
            cout << head->data << ": "
                 << "NULL " << head->right->data << endl;
        }
        else if (head->left != NULL && head->right == NULL)
        {
            cout << head->data << ": " << head->left->data << " "
                 << "NULL" << endl;
        }
        else
        {
            cout << head->data << ": "
                 << "NULL NULL" << endl;
        }
    }
    if (value > head->data)
    {
        printChild(head->right, value);
    }
    else
    {
        printChild(head->left, value);
    }
}

int main()
{
    BinaryTreeNode *head = NULL;
    insert(head, 20);
    insert(head, 30);
    insert(head, 10);
    insert(head, 15);
    insert(head, 40);
    insert(head, 25);
    insert(head, 9);
    insert(head, 45);

    printTree(head);
    cout << endl;

    printChild(head, 20);
    printChild(head, 10);
    printChild(head, 30);
    printChild(head, 40);
    printChild(head, 9);

    return 0;
}