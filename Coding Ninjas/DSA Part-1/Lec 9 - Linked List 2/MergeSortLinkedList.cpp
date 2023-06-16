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

int countLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

Node *mergeSort(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    Node *newHead = head;
    int count = countLL(head);
    Node *temp = head;
    int half_count = count / 2;
    while (count != half_count + 1 && count != 2)
    {
        count--;
        temp = temp->next;
    }
    newHead = temp->next;
    temp->next = NULL;

    Node *start = mergeSort(head);
    Node *start2 = mergeSort(newHead);

    Node *demo = start;
    Node *demo2 = start2;
    Node *head_main = NULL;
    Node *temp_main = NULL;
    while (demo != NULL && demo2 != NULL)
    {
        if (demo->data <= demo2->data)
        {
            Node *newnode = new Node(demo->data);
            if (head_main == NULL)
            {
                head_main = newnode;
                temp_main = newnode;
            }
            else
            {
                temp_main->next = newnode;
                temp_main = newnode;
            }
            demo = demo->next;
        }
        else if (demo->data > demo2->data)
        {
            Node *newnode = new Node(demo2->data);
            if (head_main == NULL)
            {
                head_main = newnode;
                temp_main = newnode;
            }
            else
            {
                temp_main->next = newnode;
                temp_main = newnode;
            }
            demo2 = demo2->next;
        }
    }

    if (demo == NULL)
    {
        temp_main->next = demo2;
    }
    else if (demo2 == NULL)
    {
        temp_main->next = demo;
    }

    return head_main;
}

int main()
{

    return 0;
}