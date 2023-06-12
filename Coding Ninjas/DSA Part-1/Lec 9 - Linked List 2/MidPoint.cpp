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

int countNodes(Node *head)
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

Node *midPoint(Node *head)
{
    int count = countNodes(head);
    int count_even = count / 2;
    int count_odd = count / 2;
    if (count % 2 == 0)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (count_even == 1)
            {
                break;
            }
            temp = temp->next;
            count_even--;
        }

        return temp;
    }
    else if (count % 2 != 0)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (count_odd == 0)
            {
                break;
            }
            temp = temp->next;
            count_odd--;
        }
        return temp;
    }
}

int main()
{

    return 0;
}