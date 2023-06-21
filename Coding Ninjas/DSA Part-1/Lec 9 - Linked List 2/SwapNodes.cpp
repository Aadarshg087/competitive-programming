#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Incomplete Answer
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

Node *swapNodes(Node *head, int i, int j)
{
    if (head == NULL || i == j)
    {
        return head;
    }
    Node *temp = head;
    int max_num = max(i, j);
    int x = 0;

    Node *prev_i = NULL;
    Node *prev_j = NULL;
    Node *i_node = NULL;
    Node *j_node = NULL;
    while (x <= max_num)
    {
        if (i == 0)
        {
            i_node = head;
        }
        else if (x == i - 1)
        {
            prev_i = temp;
        }
        else if (x == i)
        {
            i_node = temp;
        }

        if (x == j - 1)
        {
            prev_j = temp;
        }
        else if (x == j)
        {
            j_node = temp;
        }
        x++;
        temp = temp->next;
    }

    Node *j_next = j_node->next;
    int diff = abs(i - j);
    if (i == 0 && diff == 1)
    {
        head = j_node;
        j_node->next = i_node;
        i_node->next = j_next;
    }
    else if (i == 0)
    {
        head = j_node;
        j_node->next = i_node->next;
        prev_j->next = i_node;
        i_node->next = j_next;
    }
    else if (diff == 1)
    {
        prev_i->next = j_node;
        j_node->next = i_node;
        i_node->next = j_next;
    }
    else
    {
        prev_i->next = j_node;
        j_node->next = i_node->next;
        prev_j->next = i_node;
        i_node->next = j_next;
    }

    return head;
}

void insert(Node *head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
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
    Node *head = new Node(3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 2);
    insert(head, 6);
    insert(head, 1);
    insert(head, 9);

    print(head);

    cout << "After calling the function: " << endl;
    Node *temp = swapNodes(head, 5, 0);
    print(temp);

    return 0;
}