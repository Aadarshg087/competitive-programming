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
        this->next = NULL;
    }
};

// Using the two pointer approach ---------- T.c - O(n) -------------------
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (k == count)
        return head;

    k = k % count;

    ListNode *i = head;
    k = count - k;
    k--;
    while (k--)
    {
        i = i->next;
    }
    ListNode *j = head;
    while (j->next != NULL)
    {

        j = j->next;
    }

    j->next = head;
    head = i->next;
    i->next = NULL;

    return head;
}

int main()
{

    return 0;
}