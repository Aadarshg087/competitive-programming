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

void insert(int data)
{
    Node *head = NULL;
    Node *temp = head;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head->next = newNode;
        temp = head;
    }
    else
    {
    }
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *head_main = NULL;
    Node *temp = NULL;
    if (head1 == NULL && head2 != NULL)
    {
        head_main = head2;
        return head_main;
    }
    else if (head2 == NULL && head1 != NULL)
    {
        head_main = head1;
        return head_main;
    }
    else
    {
        head_main = head1;
        return head_main;
    }
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1->data <= temp2->data)
        {
            Node *newNode = new Node(temp1->data);
            if (head_main == NULL)
            {
                head_main->next = newNode;
                temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            temp1 = temp1->next;
        }
        else if (temp1->data >= temp2->data)
        {
            Node *newNode = new Node(temp2->data);
            if (head_main == NULL)
            {
                head_main->next = newNode;
                temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            temp2 = temp2->next;
        }
    }
    if (temp1 == NULL)
    {
        temp->next = temp2;
    }
    else if (temp2 == NULL)
    {
        temp->next = temp1;
    }

    return head_main;
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