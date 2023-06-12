#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->next);
    cout << head->data << " ";
}

int main()
{

    return 0;
}