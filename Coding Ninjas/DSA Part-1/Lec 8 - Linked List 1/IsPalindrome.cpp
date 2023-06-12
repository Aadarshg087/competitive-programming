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
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool isPalindrome(Node *head)
{
    int count = countNodes(head);
    Node *newHead = NULL;
    if (count == 1 || count == 0)
    {
        return true;
    }
    else if (count % 2 == 0)
    {
        int count_even = count / 2;
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
        newHead = temp->next;
        temp->next = NULL;

        temp = head;
        while (temp != NULL || newHead != NULL)
        {
            if (temp->data != newHead->data)
            {
                return false;
            }
            temp = temp->next;
            newHead = newHead->next;
        }
        return true;
    }
    else if (count % 2 != 0)
    {
        int count_odd = count / 2;
        int count_odd2 = count_odd;
        Node *temp = head;
        Node *newHead = NULL;
        while (temp != NULL)
        {
            if (count_odd == 0)
            {
                break;
            }
            count_odd--;
            temp = temp->next;
        }
        newHead = temp->next;
        temp->next = NULL;

        temp = head;
        while (temp != NULL || newHead != NULL)
        {
            if (temp->data != newHead->data)
            {
                return false;
            }
            if (count_odd2 == count_odd + 1)
            {
                break;
            }
            temp = temp->next;
            newHead = newHead->next;
            count_odd++;
        }
        return true;
    }
}

int main()
{

    return 0;
}