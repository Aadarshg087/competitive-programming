#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int count = 1;
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    int nn = count - n;
    if (nn == 0)
        return head->next;
    int i = 1;
    temp = head;
    while (i != nn + 1)
    {
        temp = temp->next;
        i++;
    }
    ListNode *temp1 = head;
    i = 1;
    while (i != nn)
    {
        temp1 = temp1->next;
        i++;
    }
    temp1->next = temp->next;
    return head;
}

int main()
{

    return 0;
}