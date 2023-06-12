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

Node *removeDuplicates(Node *head)
{
    Node *curr;
    if (curr == head)
    {
        return head;
    }
    curr = head->next;
    Node *prev = head;
    while (curr != NULL)
    {
        if (prev->data == curr->data)
        {
            prev->next = curr->next;
            curr = curr->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}

int main()
{

    return 0;
}