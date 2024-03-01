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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *newNode = new ListNode(0);
    ListNode *head = newNode;
    ListNode *temp = head;

    ListNode *i = list1;
    ListNode *j = list2;
    while (i != NULL && j != NULL)
    {
        // cout << i->val << " " << j->val << endl;
        if (i->val < j->val)
        {
            if (temp == NULL)
                temp = i;
            else
            {
                temp->next = i;
                temp = temp->next;
            }
            i = i->next;
        }
        else
        {
            if (temp == NULL)
                temp = j;
            else
            {
                temp->next = j;
                temp = temp->next;
            }
            j = j->next;
        }
    }
    while (i != NULL)
    {
        if (temp == NULL)
        {
            temp = i;
        }
        else
        {
            temp->next = i;
            temp = temp->next;
        }
        i = i->next;
    }
    while (j != NULL)
    {
        if (temp == NULL)
        {
            temp = j;
        }
        else
        {
            temp->next = j;
            temp = temp->next;
        }
        j = j->next;
    }

    return head->next;
}

int main()
{

    return 0;
}