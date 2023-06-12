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
        this->next = next;
    }
};

Node *deleteNodeRec(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    if (pos == 0)
    {
        head = head->next;
        return head;
    }
    Node *temp = deleteNodeRec(head->next, pos);
    head->next = temp;
}

int main()
{

    return 0;
}