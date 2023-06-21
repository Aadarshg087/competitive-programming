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

// Node *kReverse(Node *head, int k)
// {
//     Node *temp = head;
//     if (head == NULL || head->next == NULL || k == 0 || k == 1)
//     {
//         return head;
//     }
//     int count = 1;
//     Node *first_node = head;
//     Node *prev_first_node = NULL;
//     Node *second_node = NULL;
//     Node *second_node_next = NULL;
//     Node *prev_second_node = NULL;
//     if (k == 2)
//     {
//     }

//     while (temp != NULL)
//     {
//         if (count == 1)
//         {
//             first_node = temp;
//         }
//         else if (count == k - 1)
//         {
//             prev_second_node = temp;
//         }
//         else if (count == k)
//         {
//             second_node = temp;
//             count = 0;
//         }

//         if (first_node == head && count == 0)
//         {

//             second_node_next = second_node->next;
//             head = second_node;
//             second_node->next = first_node->next;
//             prev_second_node->next = first_node;
//             first_node->next = second_node_next;

//             // Resetting
//             first_node = temp->next;
//             prev_first_node = second_node;
//             second_node = NULL;
//             prev_second_node = NULL;
//         }
//         else if (count == 0)
//         {

//             second_node_next = second_node->next;
//             prev_first_node->next = second_node;
//             second_node->next = first_node->next;
//             prev_second_node->next = first_node;
//             first_node->next = second_node_next;

//             // Resetting
//             first_node = temp;
//             prev_first_node = prev_second_node->next;
//             second_node = NULL;
//             prev_second_node = NULL;
//         }
//         temp = temp->next;
//         count++;
//     }
//     return head;
// }

Node *kReverse(Node *head, int k)
{
    if (head == NULL || head->next == NULL || k == 0 || k == 1)
    {
        return head;
    }

    Node *h1 = head;
    Node *t1 = head;
    int count = 2;
    while (count <= k)
    {
        t1 = t1->next;
        count++;
    }
    t1 = 
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
    Node *head = new Node(4);
    insert(head, 5);
    insert(head, 7);
    insert(head, 8);
    insert(head, 3);
    insert(head, 36);
    print(head);

    kReverse(head, 2);
    print(head);
    return 0;
}