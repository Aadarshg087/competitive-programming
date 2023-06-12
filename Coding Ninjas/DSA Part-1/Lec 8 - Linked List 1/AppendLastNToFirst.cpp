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

int length(Node *head)
{
    int count = 0;
    Node *temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *appendLastNToFirst(Node *head, int n)
{
    int len = length(head);
    int diff = len - n;
    Node *newHead = NULL;
    Node *temp = head;
    for (int i = 1; i <= n; i++)
    {
        if (i == diff)
        {
            newHead = temp->next;
            temp->next = NULL;
        }

        if (i == n)
        {
            temp->next = head;
        }
        temp = temp->next;
    }

    return newHead;
}

int main()
{

    return 0;
}