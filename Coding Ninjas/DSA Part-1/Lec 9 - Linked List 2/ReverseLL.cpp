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

Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    head = prev;
    return head;
}

Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = head;
    Node *curr = head;
    Node *succ = head;
    succ = head->next;
    prev = NULL;

    while (curr != NULL)
    {
        if (curr->next == NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = succ;
        }
        else
        {
            curr->next = prev;
            prev = curr;
            curr = succ;
            succ = succ->next;
        }
    }
    return prev;
}

int main()
{

    return 0;
}