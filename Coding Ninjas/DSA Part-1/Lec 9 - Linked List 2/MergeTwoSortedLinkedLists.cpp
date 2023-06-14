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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
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
    else if (head1 == NULL && head2 == NULL)
    {
        head_main = head1;
        return head_main;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            Node *newNode = new Node(head1->data);
            if (head_main == NULL)
            {
                head_main = newNode;
                temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            head1 = head1->next;
        }
        else if (head1->data > head2->data)
        {
            Node *newNode = new Node(head2->data);
            if (head_main == NULL)
            {
                head_main = newNode;
                temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            head2 = head2->next;
        }
    }

    if (head1 == NULL)
    {
        temp->next = head2;
    }
    else if (head2 == NULL)
    {
        temp->next = head1;
    }

    return head_main;
    
}

void insert(Node *head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head1 = new Node(10);
        insert(head1, 10);
        insert(head1, 22);

        Node *head2 = new Node(3);
        insert(head2, 8);
        insert(head2, 8);
        insert(head2, 36);

        print(head1);
        print(head2);

        Node *main_head = mergeTwoSortedLinkedLists(head1, head2);
        print(main_head);
    }

    return 0;
}