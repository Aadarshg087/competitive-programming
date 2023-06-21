#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Incomplete
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

Node *evenAfterOdd(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *OddHead = NULL;
    Node *OddTail = NULL;
    Node *EvenHead = NULL;
    Node *EvenTail = NULL;

    while (temp != NULL)
    {
        if ((temp->data) % 2 == 0)
        {
            if (EvenHead == NULL)
            {
                EvenHead = temp;
                EvenTail = temp;
            }
            else
            {
                EvenTail->next = temp;
                EvenTail = temp;
            }
        }
        else if ((temp->data) % 2 != 0)
        {
            if (OddHead == NULL)
            {
                OddHead = temp;
                OddTail = temp;
            }
            else
            {
                OddTail->next = temp;
                OddTail = temp;
            }
        }
        temp = temp->next;
    }

    if (OddHead == NULL)
    {
        EvenTail->next = NULL;
        return EvenHead;
    }
    else if (EvenHead == NULL)
    {
        OddTail->next = NULL;
        return OddHead;
    }

    OddTail->next = EvenHead;
    head = OddHead;
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

// Node *evenAfterOdd(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *currNode = head;
//     Node *prev = NULL;
//     Node *nextNode = head->next;
//     while (nextNode != NULL)
//     {
//         if ((currNode->data % 2 == 0) && (nextNode->data % 2 != 0))
//         {
//             Node *temp1 = currNode;
//             Node *temp2 = nextNode;
//             temp1->next = temp2->next;
//             temp2->next = prev->next;

//             nextNode = currNode->next;
//         }
//         currNode = currNode->next;
//         nextNode = nextNode->next;
//     }
//     return head;
// }
int main()
{
    Node *head = new Node(35);
    insert(head, 41);
    insert(head, 11);
    insert(head, 9);
    insert(head, 21);

    print(head);
    cout << "After calling the Even After Odd function: " << endl;
    Node *temp_main = evenAfterOdd(head);
    print(temp_main);

    return 0;
}