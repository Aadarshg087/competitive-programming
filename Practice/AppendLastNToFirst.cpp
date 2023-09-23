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

void input()
{
    int data;
    cin >> data;
    Node *root = new Node(data);
}

int main()
{
    Node *root = NULL;
    
    return 0;
}