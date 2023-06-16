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

Node *reverseLinkedListRec(Node *head)
{
    Node *temp_curr = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *smallAns = reverseLinkedListRec(head->next);
    Node *temp = smallAns;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = temp_curr;
    temp->curr = NULL;
    return smallAns;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }

    return 0;
}