#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
    }
};

int count(Node *root)
{
    Node *temp = root;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *input(Node *root, int data)
{
    Node *newNode = new Node(data);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    Node *temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return root;
}

void printLinkedList(Node *root)
{
    if (root == NULL)
    {
        cout << "List is empty" << endl;
    }
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *appendLastNtoFirst(Node *root, int x)
{
    Node *newRoot = root;
    Node *temp = root;
    int count = 1;
    while (count < x) // 3
    {
        temp = temp->next;
        if (count = x - 1)
        {
        }
        count++;
    }
}

int main()
{
    int data;
    cin >> data;
    // Node *root = new Node(data);
    Node *root = NULL;
    while (data != -1)
    {
        root = input(root, data);
        cin >> data;
    }

    // cout << "Count is: " << count(root) << endl;
    printLinkedList(root);

    return 0;
}